import java.util.*;
class ip
{	public static void main(String[] args)
	{	String ip;
		String a="",b="",c="",d="";
		int len,x1,x2,x3,x4,op =0;
		int count=0,x=0,z=1;

		// BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
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

for(int i=0;i<len;i++)
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

System.out.println("11111111111111           "+a);
x1 = Integer.parseInt(a);

System.out.println("222222222222             "+a);
x2 = Integer.parseInt(b);
x3 = Integer.parseInt(c);
x4 = Integer.parseInt(d);
if((op==1 || x>3) || a==""||b==""||c==""||d=="" || x1>255|| x2>255|| x3>255|| x4>255 || x1<0|| x2<0|| x3<0|| x4<0 )
{
	System.out.println("Invalid ip!!!");
	op=1;
}
else
	{
		if(x1>0 && x1<128)
		{	System.out.println("A CLASS");
			System.out.println("Default Mask is : 255.0.0.0	");
			System.out.println("Network Address :" +a +".0.0.0");	}
			else if(x1>127 && x1<192)
		{	System.out.println("B Class");
			System.out.println("Default Mask is : 255.255.0.0	");
			System.out.println("Network Address :"+a +"."+b+"."+"0.0");	}
		else if (x1>191 && x1<224)
		{	System.out.println("C Class");
			System.out.println("Default Mask is : 255.255.255.0	");
			System.out.println("Network Address :"+a+"."+b+"."+c+".0");	}
		else if(x1>223 && x1 < 240)
		{	System.out.println("D Class");
			System.out.println("Default Mask is : 255.255.255.255	");
			System.out.println("Network Address :"+a+"."+b+"."+c+"."+d);	 }
		else if(x1>239 && x1<256)
		{	System.out.println("E Class");
			System.out.println("Default Mask is : 255.255.255.255	");
			System.out.println("Network Address "+a+"."+b+"."+c+"."+d);	 }
	}
}
}
}