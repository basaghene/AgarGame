import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id: appRoot
    width: 640
    height: 480
    visible: true
    title: qsTr("Agar")

    Item {
        anchors.fill: parent
        focus: true
        Keys.onPressed:
        {
            if(event.key === Qt.Key_Left)
            {
                //moveLeft();
                console.log("Move left");
            }
            if(event.key === Qt.Key_Right)
            {
               // moveRight();
                console.log("Move right");
            }
            if(event.key === Qt.Key_Up)
            {
                //moveUp();
                console.log("Move up");
            }
            if(event.key === Qt.Key_Down)
            {
                //moveDown();
                console.log("Move down");
            }
        }
    }
    function moveLeft(){
        agarBall.x = agarBall.x - 2
    }
    function moveRight(){
        agarBall.x = agarBall.x + 2
    }
    function moveUp(){
        agarBall.y = agarBall.y - 2
    }
    function moveDown(){
        agarBall.y = agarBall.y + 2
    }
    GridView {
        id: boardGrid
        width: parent.width
        height: parent.height
        model: engineController.agarBallModel
        delegate: ballComp
        cellWidth: 80
        cellHeight: 80
    }
    //
    ListModel {
        id : ballModel

        ListElement {
           ballColor: "red"
           isActivated: true
        }
        ListElement {
            ballColor: "purple"
            isActivated: true

        }
        ListElement {
            ballColor: "green"
            isActivated: false

        }
        ListElement {
            ballColor: "yellow"
            isActivated: true

        }
        ListElement {
           ballColor: "red"
           isActivated: false

        }
        ListElement {
            ballColor: "purple"
            isActivated: false

        }
        ListElement {
            ballColor: "green"
            isActivated: true

        }
        ListElement {
            ballColor: "yellow"
            isActivated: true

        }
        ListElement {
           ballColor: "red"
           isActivated: false

        }
        ListElement {
            ballColor: "purple"
            isActivated: false

        }
        ListElement {
            ballColor: "green"
            isActivated: false

        }
        ListElement {
            ballColor: "yellow"
            isActivated: true

        }
        ListElement {
           ballColor: "red"
           isActivated: true

        }
        ListElement {
            ballColor: "purple"
            isActivated: true

        }
        ListElement {
            ballColor: "green"
            isActivated: false

        }
        ListElement {
            ballColor: "yellow"
            isActivated: true

        }
        ListElement {
           ballColor: "red"
           isActivated: false

        }
        ListElement {
            ballColor: "purple"
            isActivated: false

        }
        ListElement {
            ballColor: "green"
            isActivated: true

        }
        ListElement {
            ballColor: "yellow"
            isActivated: true

        }
    }
    //
    Component {
        id: ballComp
        Rectangle {
            id: ballRect
            width: 50
            height: 50
            radius: width / 2
            color: ballColor
            visible: isActivated
        }
    }

}
