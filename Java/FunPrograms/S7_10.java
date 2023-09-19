//Section 7.10
import java.util.Scanner;

public class S7_10
{
    public static void main(String[] args)
    {

        int[] ranges = new int[9];
        for(int i=0; i<9; i++)
        {
            ranges[i] = 0;
        }

        System.out.println("Enter sales amount (Negative to end): ");

        Scanner input = new Scanner(System.in);
        double sales = input.nextDouble();

        while(sales >= 0)
        {
            double salary = sales*0.09+200;

            if(salary>=1000)
            {
                ranges[8]++;
            }
            else if ((900<=salary)&&(salary<=999))
            {
                ranges[7]++;
            }
            else if ((800<=salary)&&(salary<=899))
            {
                ranges[6]++;
            }
            else if ((700<=salary)&&(salary<=799))
            {
                ranges[5]++;
            }
            else if ((600<=salary)&&(salary<=699))
            {
                ranges[4]++;
            }
            else if ((500<=salary)&&(salary<=599))
            {
                ranges[3]++;
            }
            else if ((400<=salary)&&(salary<=499))
            {
                ranges[2]++;
            }
            else if ((300<=salary)&&(salary<=399))
            {
                ranges[1]++;
            }
            else if ((200<=salary)&&(salary<=299))
            {
                ranges[0]++;
            }



            System.out.println("Enter sales amount (Negative to end): ");
            sales = input.nextDouble();

        }

        for(int i=0; i<8; i++)
        {
            System.out.printf("$%d-$%d: %d\n", (200 + 100 * i), (299 + 100 * i), ranges[i]);
        }
        System.out.println("$1,000 and over: " + ranges[9]);
    }
}
