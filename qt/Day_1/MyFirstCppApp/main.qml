import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    id :_root
    visible: true
    width: 640
    height: 480
    title: qsTr("Cpp App")
    Row{
        spacing: 10
    Text {

        text:MyLogin.name;
        font.bold: true
        font.pixelSize: 25
    }
    Text {

        text:MyLogin.pass;
        font.bold: true
        font.pixelSize: 25
    }
    }
    MouseArea{
        anchors.fill:parent
        onClicked: {

            MyLogin.name = "akhil"
             MyLogin.pass = "789654"
    }

    Component.onCompleted: {
        console.log("value = "+karun);
        MyLogin.checkLogin("karun","12365478");
    }
}
}
