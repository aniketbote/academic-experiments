import java.util.*;
class vector
{
public static void main(String args[])
{
int i,n;
Vector v = new Vector(10);
Scanner s = new Scanner(System.in);
int a[] = new int[4];
System.out.println("Enter the elements of vector=");
for(i=0;i<4;i++)
{
a[i]=s.nextInt();
}
Integer x = new Integer(a[i]);
for(i=0;i<4;i++)
{
v.addElement(a[i]);
}
System.out.println("Enter the element=");
n=s.nextInt();
Integer b = new Integer(n);
if(v.contains(n))
{
System.out.println("Element found");
}
else
{
System.out.println("Enter not found");
}
}
}