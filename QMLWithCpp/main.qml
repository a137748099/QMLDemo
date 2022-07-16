import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
//import TestManager 1.0
//import com.mycompany.qmlcomponents 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ListView {
        id: listView
        width: 200
        height: 200

        clip: true
        model: manager.getList()

        delegate: Text {
            id: name
            text: modelData
        }
    }

//    Manager {
//        id: manager
//        color: "red"
//    }

    Connections {
        target: manager
        function onSendAdd(val) {
            console.log("add value" + val)
        }
    }

    Row {
        anchors.top: listView.bottom
        spacing: 5

        Rectangle {
            width: 100
            height: 100
            color: manager.color
        }

        Button {
            onClicked: {
                manager.color = "green"
            }
        }

        Button {
            onClicked: {
                manager.add2(1, 2)
            }
        }
    }

}
