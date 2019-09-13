import java.util.Scanner;
public class Arithmetic_Operators
{
   public static void main(String args[])
   {   
        Scanner s = new Scanner(System.in);
        while(true)
        {
            System.out.println("");
            System.out.println("Enter the two numbers to perform operations ");
            System.out.print("Enter the first number : ");
            int x = s.nextInt();
            System.out.print("Enter the second number : ");
            int y = s.nextInt();
            System.out.println("Choose the operation you want to perform ");
            System.out.println("Choose 1 for ADDITION");
            System.out.println("Choose 2 for SUBTRACTION");
            System.out.println("Choose 3 for MULTIPLICATION");
            System.out.println("Choose 4 for DIVISION");
            System.out.println("Choose 5 for MODULUS");
	System.out.println("Choose 6 for BITWISE OR");
	System.out.println("Choose 7 for  BITWISE AND");
	System.out.println("Choose 8 for COMPLEMENT OF X");
	System.out.println("Choose 9 for EX OR");
	System.out.println("Choose 10 for LEFT SHIFT X BY Y");
	System.out.println("Choose 11 for RIGHT SHIFT X BY Y");
System.out.println("Choose 12 for LOGICAL OPERATORS");
System.out.println("Choose 13 for RELATIONAL OPERATORS");
            System.out.println("Choose 14 for EXIT");
            int n = s.nextInt();
            switch(n)
            {
                case 1:
                int add;
                add = x + y;
                System.out.println("Result : "+add);
                break;
 
                case 2:
                int sub;
                sub = x - y;
                System.out.println("Result : "+sub);
                break;
 
                case 3:
                int mul;
                mul = x * y;
                System.out.println("Result : "+mul);
                break;
 
                case 4:
                float div;
                div = (float) x / y;
                System.out.print("Result : "+div);
                break;
 
                case 5:
                int mod;               
                mod = x % y;
                System.out.println("Result : "+mod);
                break;
	
	  case 6:
                int res;               
              res =x | y;
                System.out.println("Result : "+res);
                break;

	   case 7:
                int res;               
              res =x & y;
                System.out.println("Result : "+res);
                break;

	    case 8:
                int res;               
              res = ~x;
                System.out.println("Result : "+res);
                break;

	    case 9:
                int res;               
              res =x ^ y;
                System.out.println("Result : "+res);
                break;

	case 10:
                int res;               
            System.out.println(x << Y);
    	
                break;

	case 11:
                int res;               
              System.out.println(X >> Y);
    	                break;

	case 12:
               boolean a = true;
      	boolean b = false;
	 System.out.println("a = " +a);
 System.out.println("b = " +b);
      System.out.println("a && b = " + (a&&b));
      System.out.println("a || b = " + (a||b) );
      System.out.println("!(a && b) = " + !(a && b));
                break;

	case 13:
                
      System.out.println("x == y = " + (x == y) );
      System.out.println("x != y = " + (x != y) );
      System.out.println("x > y = " + (x > y) );
      System.out.println("x < y = " + (x < y) );
      System.out.println("y >= x = " + (y >= x) );
      System.out.println("y <= x = " + (y <= x) );
                break;


                case 14:
                System.exit(0);
            }
        }
    }
}