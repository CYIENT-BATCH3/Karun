import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "Grey"
    Column{
        anchors.left:parent.left
        spacing :15
        Rectangle{
            width : 120
            height : 50
            color: "white"
            Text{
                id: text1
                text: qsTr("Welcome")
                anchors.centerIn: parent
                font.pixelSize: 25
            }
        }
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text2
                text: qsTr("  Edit ")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
        }
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text3
                text: qsTr("Design")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text4
                text: qsTr("Debug")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text5
                text: qsTr("Projects")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text6
                text: qsTr("Help")
                anchors.centerIn: parent
                font.pixelSize: 25
            }
        }
       }
    Column{
        anchors.right:parent.right
        spacing :15
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text7
                text: qsTr("Welcome")
                anchors.centerIn: parent
                font.pixelSize: 25
            }
        }
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text8
                text: qsTr("  Edit ")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
        }
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text9
                text: qsTr("Design")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text10
                text: qsTr("Debug")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text11
                text: qsTr("Projects")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text12
                text: qsTr("Help")
                anchors.centerIn: parent
                font.pixelSize: 25
            }
        }
       }
    }


