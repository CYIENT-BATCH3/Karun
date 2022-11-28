#ifndef MYLOGIN_H
#define MYLOGIN_H
#include <QObject>
class MyLogin : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ user WRITE setUser NOTIFY nameChanged)
    Q_PROPERTY(QString pass READ pass WRITE setPass NOTIFY passChanged)
public:
    explicit MyLogin(QObject *parent = nullptr);
    Q_INVOKABLE void  checkLogin(QString id,QString p);

    QString pass() const;
    void setPass(const QString &pass);

    QString user() const;
    void setUser(const QString &user);

signals:
    void nameChanged();
    void passChanged();
private:
    QString m_user;
    QString m_pass;
};

#endif // MYLOGIN_H
