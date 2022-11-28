import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 940
    height: 680
    title: qsTr("Hello World")
    Image {
        id: qml
        source: "rocket.gif"
        width: 150
        height: 150
        //anchors.bottom: parent.bottom
}
//    PropertyAnimation{
//    id: _p2
//    target:qml
//    property: "x,y"
//    from:parent.bottom
//    to: parent.right
//    duration: 8000
//    running: true
//    }
        PropertyAnimation{
        id: _p3
        target:qml
        properties: "y"
        from:0     //optional
        to: r1.height-rect1.height
        duration: 8000
        running: true
        }
}
