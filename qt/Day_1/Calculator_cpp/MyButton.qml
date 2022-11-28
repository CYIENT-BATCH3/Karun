import QtQuick 2.0

Rectangle {
      width : 75;height : 75;color: black;border.color: white;border.width: 3;
      property string text;
      signal sendMe(string value)
      Text {
          id: r1
          text: parent.text;font.bold: true;color: "green";anchors.centerIn: parent;font.pixelSize: 25
      }
      MouseArea{
          anchors.fill: parent
          onClicked: {
              console.log("Value =" +r1.text);
              MyCalculator.datafromqml(r1.text)
              sendMe(r1.text)
          }
      }
}
