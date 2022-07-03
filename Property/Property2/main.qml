import QtQuick 2.15
import QtQuick.Window 2.15
import com.mycompany.qmlcomponents 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    TestClass {
        id: testClass
        color: Qt.red
    }

    Rectangle {
        width: 100
        height: 100
        color: testClass.color
    }
}
