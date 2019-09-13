import java.applet.Applet;  
import java.awt.Graphics;  
public class First extends Applet{  
  
//import java.applet.Applet;  
//import java.awt.*;  
  
//public class GraphicsDemo extends Applet{  
  
public void paint(Graphics g){  
//g.setColor(Color.red);  
g.drawLine(200,10,200,400);
g.drawLine(10,200,400,200);
g.drawOval(100,100,200,200); 
g.drawOval(140,140,20,20);
g.drawOval(240,140,20,20); 
g.fillOval(190,190,20,20);
g.drawArc(160,235,80,30,0,-180);

}  
}
/* 
<applet code="First.class" width="800" height="300"> 
</applet> 
*/  