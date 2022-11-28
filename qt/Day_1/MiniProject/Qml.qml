import QtQuick 2.0
import QtQuick.Controls 2.5
Rectangle{
 width:940;height:780;anchors.centerIn: parent;color: "black"
 Text {
     id: t1
     text: qsTr("Welcome");font.bold: true;font.pixelSize: 45;color: "white";anchors.centerIn: parent
 }
 Row{
     anchors.bottom:parent.bottom;
     spacing: 740
  Button{text:"Previous"}
  Button{text:"Next";onClicked: ld.source="Qml2.qml"}}
}
