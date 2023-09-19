//Section 6.24

public class S6_24
{
    public static void main(String[] args)
    {
        for(int i = 1; i <= 1000; i++)
        {
            if (isPerfect(i) == true)
            {
                System.out.println(i + " is a perfect number.");

                System.out.println(i + "'s factors are: ");
                for(int j = (i - 1); j > 0; j--)
                {
                    if((i%j) == 0)
                    {
                        System.out.print(j + " ");
                    }
                }
                System.out.println();
                System.out.println();
            }
        }

    }

    public static boolean isPerfect(int a)
    {
        int sum = 0;

        for (int i = 1; i < (a - 1); i++)
        {
            if((a%i) == 0)
            {
                sum += i;
            }
        }

        if (a == sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
