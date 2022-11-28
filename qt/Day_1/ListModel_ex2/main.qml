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
        id : c1
    Rectangle{
        width:100;height:50;color: "#223355"
        Row{
    Button {
       text:Company
    }
    Text{
        text : location
        font.bold:true
        font.pixelSize: 20
    }
    }
    }
   }
    ListModel{
        id : _list
        ListElement{Company : "cyient";location : "bangalore"}
        ListElement{Company : "Bosch";location: "Hyderabad"}
        ListElement{Company : "Collins";location:"chennai"}


    }
    ListView{
        width : parent.width
        anchors.top:parent.top
        anchors.bottom:_row.top
        model : _list
        //delegate: MyText{}
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
        _list.insert(1,{Company : "Aptiv",location : "pune"})
    }

    function remove(){
        _list.remove(0)
        console.log("remove")
    }
    function append(){
        console.log("Append")
       _list.append({Company : "TCS",location : "Delhi"})
    }
    function printMe(){
        console.log("Print"+_list.count)
        for(var i=0;i<_list.count;i++){
            var obj = _list.get(i);
            console.log(obj.Company)
            console.log(obj.location)

         }
    }
}

