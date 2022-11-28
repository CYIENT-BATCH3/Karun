import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color :"grey"
//    Monitor{
//        id : m1
//        visible : false
//        anchors.right: parent.right
//        anchors.left: b1.right
//    }
    Loader{
        id :ld
    }
    Column{
    MyButton{
        id:b1
    text: "monitor"
    onSendMe: {
        console.log("welcome")
        //m1.visible = true;
        ld.source = "Monitor.qml"
    }
    }
    MyButton{
        id:b2
    text: "Developer"
    onSendMe: {
        console.log("welcome")
        //m1.visible = true;
        ld.source = "MyDeveloper.qml"
    }
    }
}
}
