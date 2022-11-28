import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 840
    height: 680
    title: qsTr("Hello World")
    Row{
        spacing :5
        Login{
onSendme:{
               console.log("send me called");
       disp.receiveme(name,id,age,gender,section)
            }

        }
   Login_display{
   id:disp
   }
}
}

