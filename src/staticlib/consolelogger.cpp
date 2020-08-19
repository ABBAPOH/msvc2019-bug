#include "consolelogger.h"

ConsoleLogger::ConsoleLogger()
{

}

ConsoleLogger &ConsoleLogger::instance()
{
    static ConsoleLogger logger;
    return logger;
}
