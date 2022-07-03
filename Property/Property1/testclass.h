#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QObject>
#include <QColor>
#include <qqml.h>

class TestClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
    QML_ELEMENT
public:
    explicit TestClass(QObject *parent = nullptr);

    const QColor &color() const;
    void setColor(const QColor &newColor);

signals:
    void colorChanged();

private:
    QColor m_color;

};

#endif // TESTCLASS_H
