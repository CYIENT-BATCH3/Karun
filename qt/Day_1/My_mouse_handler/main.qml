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
        color: "aqua"
        anchors.fill: parent
        MouseArea{
            anchors.fill: parent
            onPressed : rect2.visible = true
            acceptedButtons: Qt.LeftButton | Qt.RightButton
            onClicked:{

                console.log("welcome to mouse handling"+mouse.x)
                console.log("welcome to mouse handling"+mouse.y)
                if(mouse.button === Qt.LeftButton){
                    console.log("left button is pressed")

                }
                else{
                    console.log("right button is pressed")
                }
               rect2.visible = !rect2.visible
               rect2.color ="blue"
            }
        }
}
    Rectangle{
        visible: false
        id : rect2
        width : 100
        height : 150
        color: "white"
    }
}
    //        Text {
//            text: qsTr("KARUN")
//            anchors.centerIn: parent
//            font.bold: true
//            font.pixelSize: 35
//            color: "black"
//            MouseArea{
//                anchors.fill: parent
//                onPressed: parent.color = "green"
//                onReleased: parent.color = "black"
//            }
//        }


