#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <cerrno>
#include <cstring>
#include <iostream>
#include <string>
#include <fstream>
#define BUFFER_LENGTH 4096

void	read_stdin() {
	std::string		line;

	while (std::getline(std::cin, line)) {
		std::cout << line;
		if (std::cin.good())
			std::cout << std::endl;
	}
}

int		is_dir(char *filepath) {
	struct stat		s;

	errno = 0;
	if(stat(filepath, &s) == 0 && S_ISDIR(s.st_mode))
		errno = EISDIR;
	return (errno);
}

bool	open_error(char *program_name, char *filepath) {
	std::cerr << program_name << ": " << filepath << ": " <<
		std::strerror(errno) << std::endl;
	return true;
}

void	output_file(std::ifstream *ifs) {
	static char	buffer[BUFFER_LENGTH];

	while (!ifs->eof()) {
		ifs->read(buffer, sizeof(buffer));
		std::cout.write(buffer, ifs->gcount());
	}
}

int	main(int argc, char **argv) {
	int				error = false;
	std::ifstream	ifs;

	if (argc == 1) {
		read_stdin();
	} else {
		for (int i = 1; i < argc; i++) {
			errno = is_dir(argv[i]);
			if (!errno) {
				ifs.open(argv[i]);
			}
			if (errno || !ifs) {
				error = open_error(argv[0], argv[i]);
			} else {
				output_file(&ifs);
			}
			if (ifs) {
				ifs.close();
			}
		}
	}
	return error;
}
