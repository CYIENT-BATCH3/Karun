import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Window {
        visible: true
        width: 640
        height: 480
        title: qsTr("Hello World")
        color: "black"
        Rectangle{
            width : 70
            height : 70
            color: "white"
            x:20
            y:30
            radius:50

            Text {
                id: text1
                text: qsTr("New")
                font.pixelSize: 25
            }
        }
        Rectangle{
            width : 70
            height : 70
            color: "white"
            x:100
            y:30
            radius:50
            Text {
                id: text2
                text: qsTr("File")
                font.pixelSize: 25

            }
        }
        Rectangle{
            width : 70
            height : 70
            color: "white"
            x:180
            y:30
            radius:50
            Text {
                id: text3
                text: qsTr("Save")
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"
            x:260
            y:30
            radius:50
            Text {
                id: text4
                text: qsTr("Edit")
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"
            x:340
            y:30
            radius:50
            Text {
                id: text5
                text: qsTr("Bulid")
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"
            x:420
            y:30
            radius:50
            Text {
                id: text6
                text: qsTr("Run")
                font.pixelSize: 25
            }
    }
    }
}
