import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "grey"
    Loader{
        id :ld
    }
    Column{
    MyButton{
        id:b1
    text: "1"
    onSendMe: {
        console.log("welcome to monitor")
        ld.source = "MyMonitor.qml"
    }
    }
    MyButton{
        id:b2
    text: "2"
    onSendMe: {
        console.log("welcome to developer")

        ld.source = "MyDeveloper.qml"

    }
    }
    MyButton{
        id:b3
    text: "3"
    onSendMe: {
        console.log("welcome to user")

        ld.source = "MyUser.qml"

    }
    }
    MyButton{
        id:b4
    text: "4"
    onSendMe: {
        console.log("welcome to Exit")

        ld.source = "MyExit.qml"

    }
    }
}
}
