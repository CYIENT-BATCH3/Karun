import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "black"
    Rectangle{
        id : rect1
        width : parent.width/2
        height : 150
        color: "aqua"
//        anchors.left:parent.left
//        anchors.right: parent.right
//        anchors.bottom: parent.bottom
       anchors.top: parent.top
        //another to fill
        //anchors.fill: parent
        Text {
            text: qsTr("KARUN")
            anchors.centerIn: parent
            font.bold: true
            font.pixelSize: 35
            color: "green"
        }
    }
}
