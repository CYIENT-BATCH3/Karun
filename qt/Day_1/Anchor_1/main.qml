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
        width : 150
        height : 150
        color: "White"
        Text {
            id: name1
            text: qsTr("text1")
        }
    }
    Rectangle{
        id : rect2
        width : 150
        height : 150
        color: "aqua"
        anchors.left: rect1.right
        anchors.leftMargin: 20
        //anchors.right:rect3.left
        x:250//ignores
        Text {
            id: name2
            text: qsTr("text2")
        }
    }
    Rectangle{
        id : rect3
        width : 150
        height : 150
        color: "green"
        anchors.right: parent.right
        anchors.leftMargin: 20
        x:250//ignores
        Text {
            id: name3
            text: qsTr("text3")
        }
    }
}
