import java.awt.*;
import java.awt.event.*;

class Student extends Frame implements MouseListener 
{
Label lab1,lab2,lab3;
TextField text10,text20,text30;
Button but100,but200;

Student()
{
setSize(450,450);
setResizable(true);
setVisible(true);
lab1=new Label("NAME");
text10=new TextField();

lab2=new Label("AGE");
text20=new TextField();

lab3=new Label("ADDRESS");
text30=new TextField();

but100=new Button("close");
but200=new Button("save");

lab1.setBounds(25,65,50,20);
lab2.setBounds(25,90,50,20);
lab3.setBounds(25,120,50,20);

text10.setBounds(100,65,50,20);
text20.setBounds(100,90,50,20);
text30.setBounds(100,120,50,20);

but100.setBounds(25,150,50,20);
but200.setBounds(25,180,50,20);

but100.addMouseListener(this);



add(lab1);
add(lab2);
add(lab3);
add(text10);
add(text20);
add(text30);
add(but100);
add(but200);
//setSize(400,400);
//setVisible(true);
}
}
class Reg
{
public static void main(String args[])
{
Student stu=new Student();
}
//@override
public void mouseClicked(MouseEvent e)
{
if(e.getSource()==but100)
{
removeAll();
dispose();
}
}
}

