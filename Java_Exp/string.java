import java.util.*;
import java.io.*;
class string
{
public static void main(String args[])
{
Scanner a=new Scanner(System.in);
String s,s1;
int n,i,flag=0;
System.out.println("Enter the string=");
s1=a.nextLine();
s=s1.toLowerCase();
n=s.lenght();
for(i=0;i<n;i++)
{
if(s.charAt(i)==s.charAt(n-1-i))
{continue;
}
else
{
 flag=1;
break;
}
}
if(flag==1)
{
System.out.println("NOT PALLINDRome");
}
else
{
System.out.println(" PALLINDRome");
}
}
}
