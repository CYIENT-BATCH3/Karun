import QtQuick 2.0

Rectangle {
      width : 100;height : 100;color:"black";border.color: "white";border.width: 3;
      property string text;
      signal sendMe(string value)

      Text {
          id: r1
          text: parent.text;font.bold: true;color: "White";anchors.centerIn: parent;font.pixelSize: 25
      }
      MouseArea{
          anchors.fill: parent
          onClicked: {
              //console.log("Value =" +r1.text);
              sendMe(r1.text)
          }
      }
      Component.onCompleted: {
          console.log("my button is created")
      }
      Component.onDestruction: {
          console.log("my button is destructed")
      }
}
