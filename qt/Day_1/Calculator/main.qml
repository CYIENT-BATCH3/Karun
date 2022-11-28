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
        spacing: 5
        Rectangle{
             width : 300;height :50;color: "black"
        TextInput{
            id : ti
            font.pixelSize: 25
            font.bold: true
           anchors.fill: parent
           color: "white"
        }
    }

    Grid{
    MyButton{text : "7"
        onSendMe : getValue(value);
    }
    MyButton{text : "8"
        onSendMe : getValue(value);
    }
    MyButton{text : "9"
    onSendMe : getValue(value);
    }
    MyButton{text : "/"
    onSendMe : getValue(value);
    }
    MyButton{text : "4"
    onSendMe : getValue(value);
    }
    MyButton{text : "5"
    onSendMe : getValue(value);
    }
    MyButton{text : "6"
    onSendMe : getValue(value);
    }
    MyButton{text : "*"
    onSendMe : getValue(value);
    }
    MyButton{text : "1"
    onSendMe : getValue(value);
    }
    MyButton{text : "2"
    onSendMe : getValue(value);
    }
    MyButton{text : "3"
    onSendMe : getValue(value);
    }
    MyButton{text : "-"
    onSendMe : getValue(value);
    }
    MyButton{text : "C"
    onSendMe : getValue(value);
    }
    MyButton{text : "0"
    onSendMe : getValue(value);
    }
    MyButton{text : "="
    onSendMe : getValue(value);
    }
    MyButton{text : "+"
    onSendMe : getValue(value);
    }
    }
}
}
