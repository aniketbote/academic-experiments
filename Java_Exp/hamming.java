import java.io.*;
import java.util.*;
class hamming
{
public static void main( String args[]) throws IOException
{
Scanner sc = new Scanner( System.in);
int d[],h[],n,i,m,j,k,count,sum,c;
System.out.print("Enter the no of data bits=");
n=sc.nextInt();
i=1;
while(n+1>=Math.pow(2,i))
	i++;
m=i+n;
d = new int[n+1];
h = new int[m+1];

System.out.print("Enter the data bits=");
for(i=1;i<=n;i++)
	d[i]=sc.nextInt();

for(i=1,j=0,k=1;k<=m;k++)
{
	if(Math.pow(2,j)==k)
	{
		h[k]=0;
		j++;
	}
	else
	{
		h[k]=d[i];
		i++;
	}
	

}

for(k=1,j=0;k<=m;k++)
{
	if(Math.pow(2,j)==k)
	{
		h[k]=0;
		count=0;
		sum=0;
		for(c=k;c<=m;c++)
		{
			if(count<k)
			{
				sum=sum+h[c];
				count++;
			}
			else
			{
				c=c+k-1;
				count=0;
			}
		}
		
		if(sum%2!=0)
		{
			h[k]=1;
		}
		else
		{
			h[k]=0;
		}
		j++;
	}
}

for(i=m;i>=1;i--)
{
	System.out.print(h[i]);
}
}
}

