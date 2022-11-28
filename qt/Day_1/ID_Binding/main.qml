import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "#556677"
    function callme(){
        //print debug message on console
        console.log("welcome to program")
        r1.width = 120;
    }
    function add(x,y){
        console.log("X="+x + "Y=" +y)
        var obj = {objectName = "karun",objectaddress = "TS",objectnumber = "7093476647"}
        console.log("Name = "+obj.objectname)
        console.log("Address = "+obj.objectaddress)
    }
//    function returnfunction(){
//        a = 100;
//        return a;
//    }

    Rectangle{
        id : r1
        width: 250
        height: 50
        color: "#112233"
        radius: 5
        x:10
    }
    Rectangle{
        id : r2
        width: r1.width;
        height: 50
        color: "#445566"
        radius: 5
        x:r1.x+r1.width+10;
    }
    Rectangle{
        id : r3
        width: r1.width;
        height: 50
        color: "black"
        radius: 5
        x:r2.x+r1.width+10;
    }
    Rectangle{
        id : r4
        width: r1.width;
        height: 50
        color: "black"
        radius: 5
        x:r3.x+r1.width+10;
    }
    Component.onCompleted: {
        console.log("first method is called")
        callme();
        add(10,20)
        add("karun","akhil");
        //console.log(x,y,z)
    }
}
