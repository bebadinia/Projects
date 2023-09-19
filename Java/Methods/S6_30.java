//Section 6.30
import java.util.Random;
import java.util.Scanner;

public class S6_30
{
        public static void main(String[] args) {
            System.out.println("Guess the integer from 1 to 1000!");

            boolean run;

            do {
                Random rand = new Random();
                int n = 1 + rand.nextInt(1000);

                System.out.print("Input integer: ");
                Scanner input = new Scanner(System.in);
                int num = input.nextInt();

                while (num != n) {
                    if (num < n) {
                        System.out.println("Too low. Try again: ");
                    } else {
                        System.out.println("Too high. Try again: ");
                    }

                    num = input.nextInt();
                }
                System.out.println("Congratulations. You guessed the number!");

                System.out.print("Do you want to play again? (1 for Yes): ");
                int check = input.nextInt();

                run = false;

                if (check != 1)
                {
                    run = true;
                    System.out.println("Thanks for playing!");
                }

            } while (run == false);
        }
}
