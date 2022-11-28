import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "Grey"
    Row{
        spacing :20
        anchors.top: parent.top
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text1
                text: qsTr("New")
                anchors.centerIn: parent
                font.pixelSize: 25
            }
        }
        Rectangle{
            width : 70
            height : 70
            color: "white"
            Text {
                id: text2
                text: qsTr("Save")
                anchors.centerIn: parent
                font.pixelSize: 25
            }
         Rectangle{
             visible: false
             id : r4
             width : 400
             height : 30
             x:25;y:150;radius: 20
             Text {

                 text: qsTr("Nothing to save")
                 anchors.centerIn: parent
                 font.pixelSize: 25
                 font.bold: true
             }
         }
         MouseArea{
             anchors.fill: parent
             onPressed: r4.visible = true
             onReleased: r4.visible = false
         }
        }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text3
                text: qsTr("Pencil")
               anchors.centerIn: parent
                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text4
                text: qsTr("Size")
                anchors.centerIn: parent

                font.pixelSize: 25

            }
            Rectangle{
                visible: false
                id :r2
               width : 70;height: 350;color: Black
               //spacing : 15
               x : 0;y : 70
               Grid{
                   columns: 1
                   spacing : 5
                   anchors.centerIn: r2
                   Rectangle{width : 5;height : 5 ;color: "black";radius: 5;x:35}
                   Rectangle{width : 15;height : 15 ;color: "black";radius: 15;x:35}
                   Rectangle{width : 25;height : 25 ;color: "black";radius: 25;x:35}
                   Rectangle{width : 35;height : 35 ;color: "black";radius: 35;x:35}
                   Rectangle{width : 45;height : 45 ;color: "black";radius: 45;x:35}


            }
            }
            MouseArea{
                anchors.fill: parent
                onPressed: r2.visible = true
                onReleased: r2.visible = false
            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"

            Text {
                id: text5
                text: qsTr("Erase")
                anchors.centerIn: parent

                font.pixelSize: 25

            }
    }
        Rectangle{
            width : 70
            height : 70
            color: "white"

             Text {
                id: text6
                text: qsTr("colour")
                anchors.centerIn: parent
                font.pixelSize: 25
            }
        Rectangle{
            visible: false
            id :r1
           width : 70;height: 350;color: Black
           //spacing : 15
           x : 0;y : 70
           Grid{
               columns: 2
               spacing : 5
               Rectangle{width : 25;height : 25 ;color: "blue";radius: 25}
               Rectangle{width : 25;height : 25 ;color: "red";radius: 25}
               Rectangle{width : 25;height : 25 ;color: "green";radius: 25}
               Rectangle{width : 25;height : 25 ;color: "orange";radius: 25}
               Rectangle{width : 25;height : 25 ;color: "aqua";radius: 25}
               Rectangle{width : 25;height : 25 ;color: "black";radius: 25}
               Rectangle{width : 25;height : 25 ;color: "pink";radius: 25}
               Rectangle{width : 25;height : 25 ;color: "yellow";radius: 25}
        }
        }
        MouseArea{
            anchors.fill: parent
            onPressed: r1.visible = true
            onReleased: r1.visible = false
        }
}
}
}
