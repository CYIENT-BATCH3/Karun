import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 1140
    height: 480
    title: qsTr("Hello World")
    color: "grey"

    Monitor{
        id : m1
        visible:false
        anchors.right:parent.right
        anchors.left:_b1.right
    }

  Column {
       spacing : 10

       MyButton{text : "Monitor"
             id : _b1
        onSendMe: {
            console.log("monitor is visible")
            m1.visible = true
        }
       }

       }
     }

