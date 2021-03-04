#include <cstring>
#include <fstream>
#include <string>

static int	close_iofstreams(std::ifstream *ifs, std::ofstream *ofs) {
	if (ifs)
		ifs->close();
	if (ofs)
		ofs->close();
	return 1;
}

static int	replace(std::ifstream *ifs, std::ofstream *ofs,
							char *pattern, char *replacement) {
	const long		pattern_length = strlen(pattern);
	const long		replacement_length = strlen(replacement);
	char			*buffer = new (std::nothrow) char[pattern_length];
	char			ch;

	if (!buffer)
		return close_iofstreams(ifs, ofs);
	while ((ch = ifs->peek()) != EOF) {
		if (ch != pattern[0]) {
			ofs->put(ifs->get());
		} else {
			ifs->read(buffer, pattern_length);
			if (ifs->gcount() != pattern_length) {
				ofs->write(buffer, ifs->gcount());
				break;
			}
			if (!memcmp(buffer, pattern, pattern_length)) {
				ofs->write(replacement, replacement_length);
			} else {
				ifs->seekg(-pattern_length, std::ios::cur);
				ofs->put(ifs->get());
			}
		}
	}
	delete [] buffer;
	return 0;
}

int	main(int argc, char **argv) {
	if (argc != 4 || !*argv[2] || !*argv[3])
		return 1;

	std::ifstream	ifs(argv[1]);
	if (!ifs)
		return 1;
	std::ofstream	ofs(std::string(argv[1]) + ".replace");

	if (!ofs) {
		return (close_iofstreams(&ifs, &ofs));
	}

	if (replace(&ifs, &ofs, argv[2], argv[3]))
		return 1;
	ifs.close();
	ofs.close();
	return 0;
}
