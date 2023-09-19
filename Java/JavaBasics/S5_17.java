//Section 5.17
import java.util.Scanner;

public class S5_17
{
    public static void main(String args[])
    {
            int product, quantity;
            double totalCost = 0;
            Scanner scanner = new Scanner(System.in);
            int x = 0;

            do
            {
                System.out.print("Enter product number between 1 to 5 (-1 to exit and view total): ");
                product = scanner.nextInt();
                System.out.print("Enter quantity sold: ");
                quantity = scanner.nextInt();

                switch (product)
                {
                    case -1:
                        x = -1;
                        break;
                    case 1:
                        totalCost += quantity * 2.98;
                        break;
                    case 2:
                        totalCost += quantity * 4.50;
                        break;
                    case 3:
                        totalCost += quantity * 9.98;
                        break;
                    case 4:
                        totalCost += quantity * 4.49;
                        break;
                    case 5:
                        totalCost += quantity * 6.87;
                        break;
                    default:
                        System.out.println("Not a valid product, please try again.");
                        break;
                }
            }while(x != -1);
            System.out.println("Total retail value of products sold: $" + totalCost);
        }
}
