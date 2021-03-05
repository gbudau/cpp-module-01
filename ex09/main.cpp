#include "Logger.hpp"

int	main() {
	Logger logger1("logfile1.log");
	Logger logger2("/");

	logger1.log("console", "Hello console log1!");
	logger1.log("file", "Hello file log1!");
	logger2.log("console", "Hello console log2!");
	logger2.log("file", "Hello file log2!");
}
