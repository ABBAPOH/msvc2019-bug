#include <iostream>
#include <consolelogger.h>

using namespace std;

int main()
{
    auto &l = ConsoleLogger::instance();
    cout << "Hello World!" << endl;
    return 0;
}
