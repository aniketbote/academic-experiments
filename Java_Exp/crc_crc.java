import java.util.*;
import java.io.*;

class crc_crc
{
	public static void main(String args[])
	{
		int i,j,k,m,n,msb,d[],z[],r[],g[];
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the no data bits=");
		n=sc.nextInt();
		
		System.out.println("Enter the generating bits=");
		m=sc.nextInt();
		
		d = new int[m+n];
		g = new int[m];
		
		System.out.println("Enter the data bits=");
		for(i=0;i<n;i++)
			d[i]=sc.nextInt();
		
		System.out.println("Enter the generating bits=");
		for(i=0;i<m;i++)
			g[i]=sc.nextInt();
		
		r = new int[m+n];
		z = new int[m];
		
		for(i=0;i<m-1;i++)
			d[m+i]=0;
		
		for(i=0;i<m;i++)
			z[i]=0;
		
		for(i=0;i<m;i++)
			r[i]=d[i];
		
		for(i=0;i<n;i++)
		{
			msb = r[i];
			k=0;
			for(j=i;j<m+i;j++)
			{
				if(msb==0)
					r[j]=xor(r[j],z[k]);
				else
					r[j]=xor(r[j],g[k]);
				k++;
			}
			r[m+i]=d[m+i];
		}
		
		for(i=m;i<m+n-1;i++)
			d[i]=r[i];
		
		for(i=0;i<m+n-1;i++)
			System.out.print(" "+d[i]);
		
	}
	
	public static int xor(int x, int y)
	{
		if(x==y)
			return 0;
		else
			return 1;
	}
	
}