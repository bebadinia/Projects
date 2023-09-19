//Section 7.12
import java.util.Scanner;

public class S7_12
{
    public static void main(String args[])
    {
        int user[] = new int [5];
        Scanner input = new Scanner(System.in);
        int count = 0;

        while(count < user.length)
        {
            System.out.println("Enter a number between 10 to 100 (Inclusive): ");
            int temp = input.nextInt();

            if ((temp >= 10) && (temp <= 100))
            {
                int control = 0;

                for (int i = 0; i < count; i++)
                {
                    if (temp == user[i])
                    {
                        control = 1;
                    }
                }

                if (control == 0)
                {
                    user[count] = temp;
                    count++;
                }
                else
                {
                    System.out.println("Number is a dublicate.");
                }
            }
            else
            {
                System.out.println("Number should be between 10 and 100");
            }


            System.out.println("The numbers currently in the array are: ");
            for (int i = 0; i < count; i++ )
            {
                System.out.print(user[i] + " ");
            }

            System.out.println("\n");
        }
    }
}
