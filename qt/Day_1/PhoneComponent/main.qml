import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "grey"
    Column{
        MyPhone{name : "Karun" ;
            ph_number : "7093476647"
        }
        MyPhone{name : "Akhil" ;
            ph_number : "1236547895"
        }
        MyPhone{name : "Anil" ;
            ph_number : "6547896321"
        }
        MyPhone{name : "rakesh" ;
            ph_number : "1265478987"
        }
        MyPhone{name : "pavan" ;
            ph_number : "1236547899"
        }
    }
}
