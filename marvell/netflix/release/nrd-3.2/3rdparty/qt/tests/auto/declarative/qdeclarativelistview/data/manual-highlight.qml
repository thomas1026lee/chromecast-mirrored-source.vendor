import Qt 4.7

Item {

    ListModel {
        id: model
        ListElement {
            name: "Bill Smith"
            number: "555 3264"
        }
        ListElement {
            name: "John Brown"
            number: "555 8426"
        }
        ListElement {
            name: "Sam Wise"
            number: "555 0473"
        }
        ListElement {
            name: "Bob Brown"
            number: "555 5845"
        }
    }

    Component {
        id: highlight
        Rectangle {
            objectName: "highlight"
            width: 180; height: 20
            color: "lightsteelblue"; radius: 5
            y: list.currentItem.y
        }
    }

    ListView {
        id: list
        objectName: "list"
        anchors.fill: parent
        model: model
        delegate: Text { objectName: "wrapper"; text: name }

        highlight: highlight
        highlightFollowsCurrentItem: false
        focus: true
    }

}
