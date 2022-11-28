import QtQuick 2.11
import QtQuick.Window 2.11
import QtQuick.Controls 2.5
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "black"

    Rectangle {
        id: rectangle
        x: 0
        y: 232
        width: 640
        height: 183
        color: "#ffffff"
        border.width:3
        border.color: black
        Image{
            id:i1
            x: 514
            y: 148
            width:49;height:28
            source:"search1.png"
            MouseArea{
                anchors.fill:parent
                onClicked: {
                    console.log("Searching")
                }
        }
        }
        Image{
            id:i2
            x: 428
            y: 148
            width:49;height:28
            source:"he1.png"
            MouseArea{
                anchors.fill:parent
                onClicked: {
                    console.log("Like Button")
                }
            }
        }
        Image{
            id:i3
            x: 577
            y: 148
            width:49;height:28
            source:"menu1.png"
            MouseArea{
                anchors.fill:parent
                onClicked: {
                    console.log("Options")
                }
        }
        }
        Image{
            id:i4
            x: 13
            y: 148
            width:39;height:28
            source:"menu2.png"
            MouseArea{
                anchors.fill:parent
                onClicked: {
                    console.log("Menu")
                }
            }
        }
    }

    Rectangle {
        id: rectangle1
        x: 0
        y: 82
        width: 640
        height: 144
        color: "#aaaaaa"

            Rectangle {
                id: rectangle2
                x: 273
                y: 92
                width: 94
                height: 97
                radius:50
                color: "Aqua"
                border.width:3
                border.color: black
            }
        }
    }

