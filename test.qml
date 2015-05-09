import Qt 4.7

Rectangle {
      id:page
      width:500; height:200
      color:"yellow"
      
      Text {
           id: helloText
           text:"Hello World! 2015"
           font.pointSize:24; font.bold:true
           y:40;
           anchors.horizontalCenter:page.horizontalCenter
      }
}
