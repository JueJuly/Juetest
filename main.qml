import Qt 4.7
Rectangle {
      id:page
      width:500; height:200
      color:"lightgray"
      
      Text {
          id: helloText
          text: "2015.04.27"
          y:40
          anchors.horizontalCenter:page.horizontalCenter
          font.pointSize:24
          font.bold:true
      }
      
      Grid {
           id:colorPicker
           x:4;
           anchors.bottom:page.bottom;
           anchors.bottomMargin:4
           rows:2;
           columns:3; spacing:3
           
           Cell { cellColor:"red"; onClicked:helloText.color = cellColor }
           Cell { cellColor:"green"; onClicked:helloText.color = cellColor }
           Cell { cellColor:"blue"; onClicked:helloText.color = cellColor }
           Cell { cellColor:"yellow"; onClicked:helloText.color = cellColor }
           Cell { cellColor:"steelblue"; onClicked:helloText.color = cellColor }
           Cell { cellColor:"black"; onClicked:helloText.color = cellColor }
      }
      

}
