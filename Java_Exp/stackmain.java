import Stack.*;
import java.io.*;
import java.util.*;


class stackmain
{
public static void main(String args[])
	{
		int n,c,y;
		Scanner ab = new Scanner(System.in);
		stack a = new stack();
		
		
		do
		{
		System.out.println("Enter the operation you want to perform:");
		System.out.println("1.Push");
		System.out.println("2.Pop");
		System.out.println("3.Peek");
		System.out.println("4.Display");
		System.out.println("5.Stop");
		c=ab.nextInt();
		switch(c)
		{
			case 1:
			System.out.println("Enter the element you want to push:");
			int element=ab.nextInt();
			a.push(element);
			System.out.println("Element pushed!");
			break;

			case 2:
			a.pop();
			break;

			case 3:
			y=a.peek();
			System.out.println("Enter the element you want to push:"+y);
			break;

			case 4:
			a.display();
			break;
			
		}		

		}while(c!=5);
		
	}
}