//Section 2_28
import java.util.Scanner;

public class S2_28
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a radius of a circle as an integer: ");
        int radius = input.nextInt();

        System.out.printf("Diameter: %d\n", radius*2);
        System.out.printf("Circumference: %f\n", Math.PI*(double)(radius*2));
        System.out.printf("Area: %f\n", Math.PI*(double)(radius*radius));
    }
}
