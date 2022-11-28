import QtQuick 2.0
import QtQuick.Controls 2.5
Item {
width: 500
height: 500
signal sendme(string name,string id,string age,string gender,string section);
Rectangle{
    id : r1;width:400;height:400;color: "black"
    Row{id : _row; spacing:10; width : parent.width;height : 50;anchors.bottom: parent.bottom
        Button{text: "Ok"
                  onClicked: {
                           sendme(d1.text_edit,d2.text_edit,d3.text_edit,d4.text_edit,d5.text_edit);}
                      //disp.append(d1.text_edit,d2.text_edit,d3.text_edit,d4.text_edit,d5.text_edit);}
               }
               Button{text: "cancel"
               onClicked: {
               t1.clear();
               t2.clear();
                   }
               }
           }
    Column{
        spacing: 5
        anchors.fill: parent
        Details{
            id:d1

            text_name: "Name"
        }

        Details{
            id:d2
            text_name: "ID"
        }
        Details{
            id:d3
            text_name: "Age"
        }
        Details{
            id:d4
            text_name: "Gender"
        }
        Details{
            id:d5
            text_name: "Section"
        }
    }

}
}

