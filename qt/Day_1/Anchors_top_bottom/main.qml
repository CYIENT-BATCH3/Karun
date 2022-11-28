import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "black"
    Row{
        spacing :5
        anchors.top: parent.top
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text1
                text: qsTr("New")
                anchors.centerIn: parent
                font.pixelSize: 25
            }
        }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text2
                text: qsTr("File")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
        }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text3
                text: qsTr("Save")
               anchors.centerIn: parent
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text4
                text: qsTr("Edit")
                anchors.centerIn: parent

                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text5
                text: qsTr("Bulid")
                anchors.centerIn: parent

                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text6
                text: qsTr("Run")
                anchors.centerIn: parent

                font.pixelSize: 25

            }
        }
}
    Row{
        spacing :5
        anchors.bottom: parent.bottom
        Rectangle{
            width : 70
            height : 70
            color: "white"
            anchors.bottom: parent.bottom
            Text {
                id: text7
                text: qsTr("New")
                anchors.centerIn: parent
                font.pixelSize: 25
            }
        }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text8
                text: qsTr("File")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
        }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text9
                text: qsTr("Save")
                anchors.centerIn: parent
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text10
                text: qsTr("Edit")
                anchors.centerIn: parent

                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text11
                text: qsTr("Bulid")
                anchors.centerIn: parent

                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text12
                text: qsTr("Run")
                anchors.centerIn: parent

                font.pixelSize: 25

            }
        }
}

}
