import QtQuick 2.0
import QtQuick.Controls 2.5
Rectangle{
    id:r1
    anchors.fill:parent
    Rectangle{id:rect1
        width:100;height:100;color: "black";x:360
        radius:70;}

    Row{
        spacing : 30
      anchors.bottom:parent.bottom
      Button{

          text:"Previous"
          onClicked: ld.source = "Qml.qml"
      }
      Button{
          text:"Next"
          onClicked: ld.source = "Qml3.qml"
          }

  Button{

      text:"Start"
      onClicked: {_p2.start();_p3.start()}
  }
  Button{
      text:"Break"
      onClicked: {_p2.stop();_p3.stop()
      }

  }
  }

  PropertyAnimation{
      id: _p2
      target:rect1
      property: "y"
      //from:0     //optional
      to: r1.height-rect1.height
      duration: 10000
      //running: true
      }

}
