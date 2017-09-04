import QtQuick 2.0
import QtQuick.Controls 2.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Battleship")

    property int buttonMargin: 50

    ModeButton {
        id: hostButton
        anchors {
            left: parent.left
            leftMargin: buttonMargin
            top: parent.top
            topMargin: buttonMargin
        }
        text: "Host"
    }

    ModeButton {
        id: clientButton
        anchors {
            left: hostButton.right
            leftMargin: buttonMargin
            top: parent.top
            topMargin: buttonMargin
        }
        text: "Client"
    }
}
