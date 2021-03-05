#include "Logger.hpp"

Logger::Logger(std::string filename) : _filename(filename) {
	return;
}

void		Logger::logToConsole(std::string const & message) {
	std::cout << message << std::endl;
}

void		Logger::logToFile(std::string const & message) {
	std::ofstream	ofs(this->_filename, std::ios::app);
	if (!ofs) {
		std::cerr << "Error opening the file " << this->_filename << std::endl;
	} else {
		ofs << message << std::endl;
		ofs.close();
	}
}

std::string	Logger::makeLogEntry(std::string const & message) {
	std::ostringstream	buffer;

	std::time_t	tn = std::time(0);
	std::tm		*now = std::localtime(&tn);
	buffer << '[' << (now->tm_year + 1900);
	buffer << std::setw(2) << std::setfill('0') << (now->tm_mon + 1) <<
		std::setw(2) << std::setfill('0')<< now->tm_mday << '_';
	buffer << std::setw(2) << now->tm_hour <<
		std::setw(2) << now->tm_min <<
		std::setw(2) << now->tm_sec << "] " << message;
	return buffer.str();
}

void		Logger::log(std::string const & dest, std::string const & message) {
	std::string const	dest_names[LOG_DEST_N] = {"console", "file"};
	void (Logger::*const function_ptr[LOG_DEST_N])(std::string const &) =
									{&Logger::logToConsole, &Logger::logToFile};

	for (int i = 0; i < LOG_DEST_N; i++)
		if (dest == dest_names[i])
			(*this.*function_ptr[i])(this->makeLogEntry(message));
}
