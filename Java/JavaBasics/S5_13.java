//Section 5.13
public class S5_13
{
    public static void main (String[] args)
    {
        long factorial = 1;

        for (int i = 1; i <= 20; i++)
        {
           for(int j = i; j > 0; j--)
           {
               factorial *= j;
           }
           System.out.println("The factorial of " + i + " is: " + factorial);
           factorial = 1;
        }
    }
}
