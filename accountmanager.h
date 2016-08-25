#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H
#include <QDebug>
#include <qthread.h>

#include <QObject>

class AccountManager : public QObject
{
    Q_OBJECT
public:
    explicit AccountManager();
    void doSomething() ;

signals:

public slots:
};

#endif // ACCOUNTMANAGER_H
