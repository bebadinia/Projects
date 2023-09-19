//Section 6.16
import java.util.Scanner;

public class S6_16
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in); // scanner object
        System.out.println("Enter two Integers: (First int is a multiple of Second int) ");
        int num1 = input.nextInt();
        int num2 = input.nextInt();

        if (isMultiple(num1, num2) == true)
        {
                System.out.println(num1 + " is a multiple of " + num2);
        }
        else
        {
            System.out.println(num1 + " is not multiple of " + num2);
        }
    }

    public static boolean isMultiple(int a, int b)
    {
            if (a % b == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
    }

}
