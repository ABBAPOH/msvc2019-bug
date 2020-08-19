#include <iostream>
#include <consolelogger.h>

using namespace std;

int main()
{
    auto &l = ConsoleLogger::instance();
    l.log("hello from main");

    Logger::useLogger();
//    cout << "Hello World!" << endl;
    return 0;
}
