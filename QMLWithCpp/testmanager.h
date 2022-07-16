#ifndef TESTMANAGER_H
#define TESTMANAGER_H

#include <QObject>
#include <QColor>
#include <QVariantList>
#include <qqml.h>

class TestManager : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QColor color MEMBER m_color NOTIFY colorChanged)

//    QML_ELEMENT
    QML_NAMED_ELEMENT(Manager)
public:
    explicit TestManager(QObject *parent = nullptr);

    Q_INVOKABLE void add(int a, int b);
    Q_INVOKABLE QVariantList getList() const;

    const QString &name() const;
    void setName(const QString &newName);

public slots:
    void add2(int a, int b);

signals:
    void sendAdd(int val);

    void colorChanged();

private:
    QColor m_color = Qt::red;
};

#endif // TESTMANAGER_H
