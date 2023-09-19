//Section 2_24
import java.util.Scanner;
public class S2_24
{


        public static void main(String[] args)
        {
            Scanner input = new Scanner(System.in);

            System.out.println("Enter 5 integers: ");
            int n1 = input.nextInt();
            int n2 = input.nextInt();
            int n3 = input.nextInt();
            int n4 = input.nextInt();
            int n5 = input.nextInt();

            int max = n1;
            int min = n1;

            if (n2 > max)
            {
                max = n2;
            }
            if (n3 > max)
            {
                max = n3;
            }
            if (n4 > max)
            {
                max = n4;
            }
            if (n5 > max)
            {
                max = n5;
            }

            if (n2 < min)
            {
                min = n2;
            }
            if (n3 < min)
            {
                min = n3;
            }
            if (n4 < min)
            {
                min = n4;
            }
            if (n5 < min)
            {
                min = n5;
            }

            System.out.printf("\nSmallest number is %d while the largest number is %d.\n", min, max);

        }
}
