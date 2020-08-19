#include "logger.h"

#include <iostream>

Logger::Logger()
{

}

void Logger::log(std::string_view s)
{
    std::cout << s << std::endl;
}

void Logger::useLogger()
{
    Logger l;
    l.log("use logger");
}
