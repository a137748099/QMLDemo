#include "testclass.h"

TestClass::TestClass(QObject *parent) : QObject(parent)
{

}

const QColor &TestClass::color() const
{
    return m_color;
}

void TestClass::setColor(const QColor &newColor)
{
    if (m_color == newColor)
        return;
    m_color = newColor;
    emit colorChanged();
}
