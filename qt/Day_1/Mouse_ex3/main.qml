import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 500
    height: 500
    title: qsTr("Hello World")
   // color: "Black"


    property int count: 0
        MouseArea{
            anchors.fill: parent
           // hoverEnabled: true

            acceptedButtons: Qt.LeftButton | Qt.RightButton
            onPressed: {
//                console.log("welcome to mouse handling"+mouse.x)
//                console.log("welcome to mouse handling"+mouse.y)
                if(count == 1){

                    console.log("left button is pressed")
                    rect2.x = mouseX
                    rect2.y = mouseY
                    rect2.visible = true
                }
                if(count == 2){

                    rect3.x = mouseX
                    rect3.y = mouseY
                    rect3.visible = true
                }
                if(count == 3){
                    //onpressed: rect3.visible = true
                    rect4.x = mouseX
                    rect4.y = mouseY
                    rect4.visible = true
                }
                if(count == 4){
                    //onpressed: rect3.visible = true
                    rect5.x = mouseX
                    rect5.y = mouseY
                    rect5.visible = true
                }
                if(count == 5){
                    //onpressed: rect3.visible = true
                    rect7.x = mouseX
                    rect6.y = mouseY
                    rect6.visible = true
                }
                if(count == 6){
                    //onpressed: rect3.visible = true
                    rect6.x = mouseX
                    rect6.y = mouseY
                    rect6.visible = true
                }
                if(count == 7){
                    //onpressed: rect3.visible = true
                    rect7.x = mouseX
                    rect7.y = mouseY
                    rect7.visible = true
                }
                if(count == 8){
                    //onpressed: rect3.visible = true
                    rect8.x = mouseX
                    rect8.y = mouseY
                    rect8.visible = true
                }
                if(count == 9){
                    //onpressed: rect3.visible = true
                    rect9.x = mouseX
                    rect9.y = mouseY
                    rect9.visible = true
                }
                count++;
            }
         }



    Rectangle{
        visible: false
        id : rect2
        width :50
        height : 50
        color: "red"
    }
    Rectangle{
        visible: false
        id : rect3
        width : 50
        height : 50
        color: "green"
    }
    Rectangle{
        visible: false
        id : rect4
        width : 50
        height : 50
        color: "blue"
    }
    Rectangle{
        visible: false
        id : rect5
        width : 50
        height : 50
        color: "aqua"
    }
    Rectangle{
        visible: false
        id : rect6
        width : 50
        height : 50
        color: "#445566"
    }
    Rectangle{
        visible: false
        id : rect7
        width : 50
        height : 50
        color: "#227766"
    }
    Rectangle{
        visible: false
        id : rect8
        width : 50
        height : 50
        color: "#889977"
    }
    Rectangle{
        visible: false
        id : rect9
        width : 50
        height : 50
        color: "#115599"
    }
}


