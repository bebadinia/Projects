//Section 2_30
import java.util.Scanner;

public class S2_30
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a a five digit integer: ");
        int num = input.nextInt();

        int d1 = num / 10000;
        num = num % 10000;

        int d2 = num / 1000;
        num = num % 1000;

        int d3 = num / 100;
        num = num % 100;

        int d4 = num / 10;
        num = num % 10;

        int d5 = num;

        System.out.printf("%d %d %d %d %d", d1, d2, d3, d4, d5);
    }
}
