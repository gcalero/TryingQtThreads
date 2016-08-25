#include "accountmanager.h"

AccountManager::AccountManager() : QObject()
{
    qDebug() << "XDEBUG Although this function works " << QThread::currentThread();
    qDebug() << "XDEBUG This doesn't " << thread();
}


void AccountManager::doSomething()
{
    qDebug() << "XDEBUG This is the thread " << thread();

}
