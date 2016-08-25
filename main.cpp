#include "mainwindow.h"
#include <QApplication>
#include "accountmanager.h"
#include "myapplication.h"
#include <QDebug>
#include <qthread.h>

int main(int argc, char *argv[])
{
    qDebug() << "XDEBUG main" << QThread::currentThread();
    MyApplication app(argc, argv);
    MainWindow w;
    w.show();
    qDebug() << "XDEBUG end main" << QThread::currentThread();

    return app.exec();
}
