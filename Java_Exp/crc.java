import java.io.*;
import java.util.*;
class crc
{
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
{
	int m,n,i,j,k,d[],g[],r[],msb,z[];
	System.out.print("Enter the no of data bits=");
	n=sc.nextInt();
	System.out.print("Enter the no of generating bits=");
	m=sc.nextInt();
	
	d=new int[m+n];
	g=new int[m];
	
	System.out.print("Enter the no of data bits=");
	for(i=0;i<n;i++)
	{
		d[i]=sc.nextInt();
	}
	for(i=0;i<m-1;i++)
	{
		d[n+i]=0;
	}
	System.out.print("Enter the no of generating bits=");
	for(i=0;i<m;i++)
	{
		g[i]=sc.nextInt();
	}
	
	z=new int[m];
	for(i=0;i<m;i++)
	{
		z[i]=0;
	}
	
	r=new int[m+n];
	for(i=0;i<m;i++)
	{
		r[i]=d[i];
	}
	
	for(i=0;i<n;i++)
	{
		msb=r[i];
		k=0;
		for(j=i;j<m+i;j++)
		{
			if(msb==0)
			{
				r[j]=xor(r[j],z[k]);
			}
			else
			{
				r[j]=xor(r[j],g[k]);
			}
			k++;
		}
		r[m+i]=d[m+i];
	}
	
	System.out.print("The code bits added are : ");
for(i=n;i<n+m-1;i++)
{
d[i]=r[i];
System.out.print(d[i]);
}
	
	System.out.print("CRC code is=");
	for(i=0;i<m+n-1;i++)
	{
		System.out.print(d[i]);
	}
}
}

public static int xor(int x, int y)
{
	if(x==y)
		return(0);
	else
		return(1);
}
}