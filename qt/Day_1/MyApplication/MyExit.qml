import QtQuick 2.0

Rectangle {
      width:200;height: 200;color: "black";border.color: "white";x:320
      Text {
          id: r1
          text: "Exit";font.bold: true;color: "white";anchors.centerIn: parent;font.pixelSize: 35
      }
      Component.onCompleted: {
          console.log("Exit is created")
      }
      Component.onDestruction: {
          console.log("Exit is destructed")
      }
}
