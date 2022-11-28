import QtQuick 2.11
import QtQuick.Window 2.11
import QtQuick.Controls 2.5
Window {
    visible: true
    width: 940
    height: 780
    title: qsTr("Hello World")

    Button{
        anchors.centerIn: parent
        text:"Open"
        onClicked:
        ld.source  = "Qml.qml"
    }
    Loader{
        id :ld
    }

}
