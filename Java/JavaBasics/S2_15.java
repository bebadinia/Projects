//Section 2_15
import java.util.Scanner;

public class S2_15
{
    public static void main(String[] args)
    {
            Scanner input = new Scanner(System.in);

            System.out.print("Enter first integer: ");
            int number1 = input.nextInt();

            System.out.print("Enter second integer: ");
            int number2 = input.nextInt();

            System.out.printf("Sum is %d%n", number1 + number2);
            System.out.printf("Difference is %d%n", number1 - number2);
            System.out.printf("Product is %d%n", number1 * number2);
            System.out.printf("Quotient is %d%n", number1 / number2);

    }
}
