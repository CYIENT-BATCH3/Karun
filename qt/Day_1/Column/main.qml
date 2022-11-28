import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "black"
    Column{
        spacing :15
        Rectangle{
            width : 120
            height : 50
            color: "white"

            Text {
                id: text1
                text: qsTr("Welcome")
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
                font.pixelSize: 25
            }
        }
       }
    }

