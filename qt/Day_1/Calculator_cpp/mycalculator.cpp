#include "mycalculator.h"
#include <QDebug>
MyCalculator::MyCalculator(QObject *parent) : QObject(parent)
{
    qDebug() <<Q_FUNC_INFO<<"welcome" << endl;
}

void MyCalculator::datafromqml(QString val)
{
   qDebug() <<Q_FUNC_INFO<<"Button = " << val<< endl;
}

