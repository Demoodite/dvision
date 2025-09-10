#include <iostream>
namespace logger {
void infoLog(std::string message) { std::cout << message << std::endl; }
void infoLogStarted(std::string message) { std::cout <<"STARTING: "<< message << std::endl; }
void infoLogfinished(std::string message) { std::cout <<"FINISHED: "<< message << std::endl; }
} // namespace logger
