import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 920
    height: 780
    title: qsTr("Hello World")
    color: "gray"
    //can we define my own properties? Answer:Yes(down)
    property int myWidth : 100
    Grid{
        columns: 2
        spacing :5
        Rectangle{width:myWidth;height:100;color:"aqua";radius : 5}
        Rectangle{width:myWidth;height:100;color:"aqua";radius:5}
        Rectangle{width:myWidth;height:100;color:"aqua";radius:5}
        Rectangle{width:myWidth;height:100;color:"aqua";radius:5}
        Rectangle{width:myWidth;height:100;color:"aqua";radius:5}
        Rectangle{width:myWidth;height:100;color:"aqua";radius : 5}
        }
}
