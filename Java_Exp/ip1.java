import java.io.*;
import java.util.*;
class ip1
{
	public static void main(String args[])
	{
		
		String ip;
		String a="",b="",c="",d="";
		int len,x1,x2,x3,x4,op =0;
		int count=0,x=0,z=1;
		int i;
		Scanner s = new Scanner(System.in);
		char arr []=new char[15];
		
		System.out.println("Enter Ip Address");
		ip=s.nextLine();
		len=ip.length();
		if(len<7 || len>15)
{
	System.out.println("Invalid ip");}
		
		
		else
{

for( i=0;i<len;i++)
{
if(ip.charAt(i)!='.')
{			if(x==0)
			a=a+ip.charAt(i);
			if(x==1)
			b=b+ip.charAt(i);
			if(x==2)
			c=c+ip.charAt(i);
			if(x==3)
			d=d+ip.charAt(i);
}
else if(ip.charAt(i)=='.')
{	x++;
}
else
{	op=1;
	break;
}
}
			
			
			
			x1 = Integer.parseInt(a);


x2 = Integer.parseInt(b);
x3 = Integer.parseInt(c);
x4 = Integer.parseInt(d);
		
		if( x1>0 && x1<128)
		{
			System.out.print("Class A");
		}
		
}
			
		
	}
	
}