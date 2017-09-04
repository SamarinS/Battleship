import QtQuick 2.0

Rectangle {
    id: hostButton
    width: 150
    height: 150
    color: "lightblue"

    property alias text: text.text


    Text {
        id: text
        anchors.centerIn: parent
        font.pixelSize: 20
        color: "white"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            parent.color = "blue"
        }
    }
}
