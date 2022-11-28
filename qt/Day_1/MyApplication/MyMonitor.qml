import QtQuick 2.0

Rectangle {
      width:200;height: 200;color: "black";border.color: "white";x:320
      Text {
          id: r1
          text: "Monitor";font.bold: true;color: "white";anchors.centerIn: parent;font.pixelSize: 35
      }
      Component.onCompleted: {
          console.log("Monitor is created")
      }
      Component.onDestruction: {
          console.log("Monitor is destructed")
      }
}
