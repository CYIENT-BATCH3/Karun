import QtQuick 2.0
Rectangle{id : r1;width:400;height:400;color: "white"

Component{
        id : c1
        Rectangle{
             width:200;height:200;color: "#445566";
             Column{
             Text {text: Name;font.pixelSize: 25}
             Text {text: ID;font.pixelSize: 25}
             Text {text: Age;font.pixelSize: 25}
             Text {text: Gender;font.pixelSize: 25}
             Text {text: section;font.pixelSize: 25}
           }
        }
    }

ListModel{
    id :_list
}

ListView{
    width : 250
    height:500
    anchors.right:parent.right
    model : _list
    delegate: c1
}
function receiveme(name,id,age,gender,section){
    appendMethod(name,id,age,gender,section)
}

function appendMethod(name,id,age,gender,section)
{
    _list.append({"Name":name,"ID":id,"Age":age,"Gender":gender,"section":section})
}
}
