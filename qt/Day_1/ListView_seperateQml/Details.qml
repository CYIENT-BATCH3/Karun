import QtQuick 2.0

Row{
    width:200
    property string text_name;
    property string text_edit;
    text_edit: t1.text
    spacing : 100
    Text {

        id: txt1
        text: parent.text_name;
        font.bold: true;color: "white";font.pixelSize: 25
    }
    Rectangle{width:180;height:30;color: "grey"
        TextEdit {
            id:t1;width: 150; height:50;font.styleName: "italian";font.pixelSize: 25;font.bold: true;
            focus: true;color:"white";clip: true;
        }
    }
//    function append(){
//        console.log("Append")
//       _list.append({name :text_edit.text,id : text_edit.text,age: text_edit.text,gender : text_edit.text,section:text_edit.text})
//    }
}

