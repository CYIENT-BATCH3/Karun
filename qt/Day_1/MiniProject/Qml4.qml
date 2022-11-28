import QtQuick 2.0
import QtQuick.Controls 2.5
Rectangle{
    id:r2
    anchors.fill:parent

Column {
  Rectangle{id:rect1;width:100;height:100;color:"red"
  MouseArea{anchors.fill:parent;onClicked:r2.color=parent.color }
  }
  Rectangle{id:rect2;width:100;height:100;color:"orange"
      MouseArea{anchors.fill:parent;onClicked:r2.color=parent.color }
      }
  Rectangle{id:rect3;width:100;height:100;color:"green"
      MouseArea{anchors.fill:parent;onClicked:r2.color=parent.color }
      }

  Rectangle{id:rect4;width:100;height:100;color:"yellow"
    MouseArea{anchors.fill:parent;onClicked:r2.color=parent.color }
    }

}
  Row{
      anchors.bottom:parent.bottom;
      spacing: 740
  Button{text:"Previous";onClicked: ld.source = "Qml3.qml"}
   Button{text:"Next";onClicked: ld.source = "Qml.qml"}
}

}

