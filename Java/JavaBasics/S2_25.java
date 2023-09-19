//Section 2_25
import java.util.Scanner;

public class S2_25
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter an integer: ");
        int num = input.nextInt();

        if((num%2) == 1)
        {
            System.out.print("The number is odd.");
        }
        else
        {
            System.out.print("The number is even.");
        }
    }
}
