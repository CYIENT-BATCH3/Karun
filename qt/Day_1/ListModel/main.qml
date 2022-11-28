import QtQuick 2.11
import QtQuick.Window 2.11
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 840
    height: 680
    title: qsTr("List Model")
    color: "grey"
    Component{
        id :c1
        Rectangle{
            width:100;height:50;color: "#223355"
            Row{
        Button {
           text: name
        }
        RadioButton{
            text : number
        }
        }
        }
}
    ListModel{
        id : _list
        ListElement{name:"karun";number:"7093476647";loc:"kothagudem"}
        ListElement{name:"akhil";number:"9010130233";loc:"vijayawada"}
        ListElement{name:"rakesh";number:"7981245086";loc:"kurnool"}
        ListElement{name:"anil";number:"8341245086";loc:"vizag"}

    }
    ListView{
        width : parent.width
        anchors.top:parent.top
        anchors.bottom:_row.top
        model : _list
//delegate: MyComponent{}
        delegate: c1
    }

    Row{
        id : _row
        spacing:10
       width : parent.width
       height : 50
       anchors.bottom: parent.bottom
       Button{
           text: "Add"
           onClicked: addMethod();
       }
       Button{
           text: "Insert"
           onClicked: insert();
       }
       Button{
           text: "Remove"
           onClicked: remove();
       }
       Button{
           text: "Append"
           onClicked: append();
       }
       Button{
           text: "Print"
           onClicked: printMe();
       }
    }
    function addMethod(){
        console.log("Add Method")
    }
    function insert(){
        console.log("Insert")
        _list.insert(1,{name:"mohan",number:"1236547896",loc:"vizag"})
    }
    function remove(){
        console.log("remove")
        _list.remove(0)
    }
    function append(){
        console.log("Append")
       _list.append({name:"josh",number:"8341245086",loc:"vizag"})
    }
    function printMe(){
        console.log("Print"+_list.count)
        for(var i=0;i<_list.count;i++){
            var obj = _list.get(i);
            console.log(obj.name)
            console.log(obj.number)
            console.log(obj.loc)
         }
    }
}
