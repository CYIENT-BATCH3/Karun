import QtQuick 2.0
Row{
    id:r1
        property string name;
        property string  ph_number;
    spacing: 10
    Text {
        id: name
        text: r1.name;font.bold: true;color: "white";font.pixelSize: 25
    }
   Text {
       id: ph_number
        text: r1.ph_number;font.bold: true;color: "White";font.pixelSize: 25
    }

    }

