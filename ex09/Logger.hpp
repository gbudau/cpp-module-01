#ifndef LOGGER_HPP_
#define LOGGER_HPP_
#include <ctime>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#define LOG_DEST_N 2

class Logger {
	public:
		explicit	Logger(std::string filename);
		void		log(std::string const & dest, std::string const & message);
	private:
		void		logToConsole(std::string const & message);
		void		logToFile(std::string const & message);
		std::string	makeLogEntry(std::string const & message);
		std::string	_filename;
};

#endif  // LOGGER_HPP_
