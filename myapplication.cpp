#include "myapplication.h"
#include "accountmanager.h"

MyApplication::MyApplication(int argc, char* argv[]) : QApplication(argc, argv)
{
    AccountManager am;
    am.doSomething();
}

