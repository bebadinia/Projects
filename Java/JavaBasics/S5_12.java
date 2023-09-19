//Section 5.12
public class S5_12
{
    public static void main (String[] args)
    {
        int product = 1;

        for (int i = 1; i <= 15; i++)
        {
            if((i%2)==1)
            {
                product *= i;
            }
        }

        System.out.println("The product of odd integers from 1-15 is: " + product);
    }
}
