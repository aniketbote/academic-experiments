import java.util.*;
class hamming_1
{	
public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int[] data = new int[7];
		int[] recv = new int[7];
		int[] dec = new int[3];
		int i,num;
		System.out.print("Enter the data bits=");
		data[6]=sc.nextInt();
		data[5]=sc.nextInt();
		data[4]=sc.nextInt();
		data[2]=sc.nextInt();
		data[0]=data[2]^data[4]^data[6];
		data[1]=data[2]^data[4]^data[5];
		data[3]=data[5]^data[4]^data[6];	
		
		System.out.println("Data sent is=");
		for(i=6;i>=0;i--)
			System.out.print(" "+data[i]);
		
		System.out.println("Data received is=");
		for(i=0;i<7;i++)
			recv[i]=sc.nextInt();
		
		dec[0]=recv[2]^recv[4]^recv[6]^recv[0];
		dec[1]=recv[2]^recv[4]^recv[1]^recv[5];
		dec[2]=recv[5]^recv[4]^recv[6]^recv[3];
		
		num=dec[0]*1+dec[1]*2+dec[2]*4;
		
		System.out.println("error at "+num);
		
	}
}