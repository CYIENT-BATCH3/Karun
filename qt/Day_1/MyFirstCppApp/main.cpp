#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "mylogin.h"
#include<QQmlContext>
int main(int argc, char *argv[])
{
    int uid = 2000;
    MyLogin *login;
    login = new MyLogin;
    login->checkLogin("karun","23456789");
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext *context = engine.rootContext();
    context->setContextProperty("karun",uid);
    context->setContextProperty("MyLogin",login);
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);


    return app.exec();
}
