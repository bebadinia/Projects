//Section 7.22
import java.security.SecureRandom;

public class S7_22
{
    private static SecureRandom random = new SecureRandom();
    private static int[][] board =  new int[8][8];;

    private static int currentRow = random.nextInt(8);
    private static int currentColumn = random.nextInt(8);
    private static int currentMove = 1;

    private final static int[] horizontal = {2, 1, -1, -2, -2, -1, 1, 2};
    private final static int[] vertical =  {-1, -2, -2, -1, 1, 2, 2 ,1};

    private static int[][] access = {
            {2, 3, 4, 4, 4, 4, 3, 2},
            {3, 4, 6, 6, 6, 6, 4, 3},
            {4, 6, 8, 8, 8, 8, 6, 4},
            {4, 6, 8, 8, 8, 8, 6, 4},
            {4, 6, 8, 8, 8, 8, 6, 4},
            {4, 6, 8, 8, 8, 8, 6, 4},
            {3, 4, 6, 6, 6, 6, 4, 3},
            {2, 3, 4, 4, 4, 4, 3, 2}
    };

    public static void main(String[] args)
    {
        int move;

        board[currentRow][currentColumn] = currentMove;

        System.out.printf("Starting position: %d,%d", currentRow, currentColumn);
        System.out.println();

        while (currentMove <= 64)
        {
            move();
            board[currentRow][currentColumn] = currentMove;
            updateAccess();
            currentMove++;
        }

        printBoard();
    }


    private static void updateAccess()
    {
        int testRow, testColumn;
        for(int i = 0; i < 8; i++)
        {
            testRow = currentRow + vertical[i];
            testColumn = currentColumn + horizontal[i];

            if(valid(testRow, testColumn) && access[testRow][testColumn] != 0 )
            {
                access[testRow][testColumn]--;
            }
        }
    }

    private static void move()
    {
        int minAccess = 8;
        int move = 0;
        int testRow, testColumn;

        for (int i = 0; i < 8; i++)
        {
            testRow = currentRow + vertical[i];
            testColumn = currentColumn + horizontal[i];

            if (valid(testRow, testColumn) && board[testRow][testColumn] == 0)
            {
                if (access[testRow][testColumn] <= minAccess)
                {
                    minAccess = access[testRow][testColumn];
                    move = i;
                }
            }
        }

        if (move >= 0)
        {
            currentRow += vertical[move];
            currentColumn += horizontal[move];
        }

    }

    private static boolean valid(int row, int column)
    {
        if((row < 8) && (row >= 0) && (column < 8) && (column >= 0))
        {
                return true;
        }

        return false;
    }

    private static void printBoard()
    {
        for(int i =0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                System.out.printf("%3d", board[i][j]);
            }
            System.out.println();
        }
    }

}
