import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 420
    height: 480
    title: qsTr("Qt components")
    color: "grey"
    function getValue(val){
        console.log("mt text=" +val)
        ti.text += val
    }

    Column{
        Rectangle{
             width : 200;height :50;color: "black"
        TextInput{
            id : ti
           anchors.fill: parent
           color: "white"
        }
    }

    Grid{
    MyButton{text : "1"
        onSendMe : getValue(value);
    }
    MyButton{text : "2"
    }
    MyButton{text : "3"}
    MyButton{text : "4"}
    MyButton{text : "5"}

    }
}
}
