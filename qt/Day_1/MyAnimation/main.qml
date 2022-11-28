import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 480
    height: 480
    title: qsTr("Hello World")
    Rectangle{
        id : r1
        width:400
         anchors.fill:parent;color: "aqua"


         Rectangle{id:rect1
             width:100;height:100;color: "green";anchors.centerIn: parent
             //radius:70;anchors.left:parent.left
         }
//         Rectangle{id:rect2
//             width:100;height:100;color: "yellow";radius:70;anchors.right:parent.right
//         }
MouseArea{
        anchors.fill:parent
        onClicked:{
            //srect1.y=480
        //_p1.start();
            _p2.start();
           _p3.start();
    }
    }
    //bouncing
        PropertyAnimation{
        id: _p2
        target:rect1
        easing.type: Easing.InOutBounce;
        properties: "width,height"
        from:0     //optional
        to: r1.height-rect1.height
        duration: 8000
        running: true
        }
        PropertyAnimation{
        id: _p3
        target:rect1
        properties: "rotation"
        from:0     //optional
        to: 360
        duration: 8000
        running: true
        }
//    PropertyAnimation{
//    id: _p1
//    target:r1
//    property: "color"
//    from:"aqua"     //optional
//    to:"black"
//    duration: 2000
//    //running: true
//    }
//    PropertyAnimation{
//    id: _p2
//    target:rect1
//    properties: "x,y"
//    from:0     //optional
//    to: r1.height-rect1.height
//    duration: 8000
//    running: true
//    }
//    PropertyAnimation{
//    id: _p3
//    target:rect1
//    properties: "y"
//    from:0     //optional
//    to: r1.height-rect1.height
//    duration: 8000
//    running: true
//    }
}
}
