#ifndef MYCALCULATOR_H
#define MYCALCULATOR_H

#include <QObject>

class MyCalculator : public QObject
{
    Q_OBJECT

public:
    explicit MyCalculator(QObject *parent = nullptr);
    Q_INVOKABLE void datafromqml(QString val);

signals:

};

#endif // MYCALCULATOR_H
