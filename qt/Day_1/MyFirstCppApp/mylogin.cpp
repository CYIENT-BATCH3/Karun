#include "mylogin.h"
#include <QDebug>
MyLogin::MyLogin(QObject *parent) : QObject(parent)
{
  qDebug() <<Q_FUNC_INFO<<"welcome" << endl;
}

void MyLogin::checkLogin(QString id, QString p)
{
  qDebug() <<Q_FUNC_INFO<<"welcome" << endl;
  qDebug() <<Q_FUNC_INFO<<"User.id" << id<< endl;
  qDebug() <<Q_FUNC_INFO<<"password" <<p<< endl;
}

QString MyLogin::pass() const
{
     qDebug() <<Q_FUNC_INFO<<"welcome" << endl;
    return m_pass;
}

void MyLogin::setPass(const QString &pass)
{
     qDebug() <<Q_FUNC_INFO<<"welcome" << endl;
    m_pass = pass;
    emit passChanged();
}

QString MyLogin::user() const
{
     qDebug() <<Q_FUNC_INFO<<"welcome" << endl;
    return m_user;
}

void MyLogin::setUser(const QString &user)
{
     qDebug() <<Q_FUNC_INFO<<"welcome" << endl;
    m_user = user;
    emit nameChanged();
}
