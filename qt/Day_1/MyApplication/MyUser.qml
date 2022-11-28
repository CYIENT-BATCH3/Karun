import QtQuick 2.0

Rectangle {
      width:200;height: 200;color: "black";border.color: "white";x:320
      Text {
          id: r3
          text: "User";font.bold: true;color: "white";anchors.centerIn: parent;font.pixelSize: 35
      }
      Component.onCompleted: {
          console.log("User is created")
      }
      Component.onDestruction: {
          console.log("User is destructed")
      }
}
