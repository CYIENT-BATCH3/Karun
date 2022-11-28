import QtQuick 2.0
import QtQuick.Window 2.11
import QtQuick.Controls 2.5
Rectangle{
    id:r2
    anchors.fill:parent
    Image{
       id : roc1;
       width:100;height:100;x:360;y:700
       source : "roc1.jpg"
    }
    Row{
        spacing : 740
      anchors.bottom:parent.bottom
      Button{

          text:"Previous"
          onClicked: ld.source = "Qml2.qml"
      }
      Button{
          text:"Next"
          onClicked: ld.source = "Qml4.qml"
          }

}
    focus: true
    Keys.onUpPressed: {
        console.log("keys Up-pressed")
        roc1.y-=2;

    }
}
