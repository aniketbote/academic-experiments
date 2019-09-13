import java.util.*;
class Crc_10
{
	public static void main(String args[])
	{
	 int nb,nd,q,i,j,k;
	 int[] bits = new int[10];
	 int[] data = new int[10];
	 int[] ans = new int[10];
	 int[] temp = new int[20];
	 
	 
	 Scanner scan=new Scanner(System.in);
	 
	 System.out.print("Enter the no of bits generating polynomial");
	 nb=scan.nextInt();
	 
	 System.out.print("Enter the no of data bits");
	 nd=scan.nextInt();
	 
	System.out.print("Enter the generating polynomial");
	 for (i = 0; i < nb; i++) {
		 
		        bits[i] = scan.nextInt();
		}
		
		System.out.print("Enter the data bits "+nd);
	for (i = 0; i < nd; i++) 
	{
		        data[i] = scan.nextInt();
				temp[i] = data[i];
		}
		
		int total_bits=nd+nb-1;
	for (j = data.length; j < total_bits; i++) {
		        temp[j] = 0;
		}

		
		
		int flag = nb-1;


		for (j = 0; j < nb ;j++)
			{
					ans[j]=data[j];
			}

			
		for (i = 0; i < nd+nb-3;i++) 
		{
			flag++;
			for (k = 0; k < nb ;k++)
			{
					ans[k]=bits[k]^ans[k];
			}
			for (q = 0; q < nb-1 ;q++)
			{
					ans[q]=ans[q+1];
			}
			ans[q]=temp[flag+i];
		}
		for (j = 0; j < nb ;j++)
			{
					System.out.println("crc code is "+ans[j]);
			}

	}
}