//Section 5.26
public class S5_26
{
    public static void main(String[] args)
    {
        int count = 1;

        for (count = 1; count <= 10; count++)
        {
            if (count != 5)
            {
                System.out.printf("%d ", count);
            }
            else
            {
                System.out.printf("%nBroke out of loop at count = %d%n", count);
                count = 11;
            }
        }


    }
}
