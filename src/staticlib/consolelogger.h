#pragma once

#include <logger.h>

class ConsoleLogger : public Logger
{
public:
    ConsoleLogger();
    static ConsoleLogger &instance();
};

