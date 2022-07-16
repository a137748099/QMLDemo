#include "testmanager.h"
#include <QDebug>

TestManager::TestManager(QObject *parent) : QObject(parent)
{
}

void TestManager::add(int a, int b)
{
    emit sendAdd(a+b);
}

QVariantList TestManager::getList() const
{
    QVariantList list = {9, 8, 7};
    return list;
}

void TestManager::add2(int a, int b)
{
    emit sendAdd(a+b);
}
