import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Rectangle{
        anchors.fill: parent
        focus : true
        color: "aqua"
        Rectangle{
            id : r1
            width :200;height:200;color: "white"
            anchors.centerIn: parent
        }
         Keys.onLeftPressed: {
             r1.rotation +=1;
             r1.anchors.centerIn = undefind
         }
//         Keys.onUpPressed: {

//         }

        Keys.onPressed:{
            //console.log("keys pressed")
            //keyevent
            if(event.key === Qt.Key_M){
            console.log("M has pressed")
            }
        }
        Keys.onUpPressed: {
            console.log("keys Up-pressed")
            r1.x--;
            r1.anchors.centerIn = undefind
        }
        Keys.onSpacePressed: {
            console.log("keys space-pressed")
        }
    }
}
