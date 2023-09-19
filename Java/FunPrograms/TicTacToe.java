import java.util.Scanner;

public class TicTacToe
{
    Scanner input = new Scanner(System.in);
    public enum Space { X, O, EMPTY };
    public enum Result {XWINS, OWINS, DRAW, INCOMPLETE };

    private Space[][] Board;
    private String[] Players;

    private Space playerMove;
    private int count;

    public TicTacToe(String p1, String p2)
    {
        Board = new Space[3][3];

        for (int i=0;i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Board[i][j] = Space.EMPTY; //each spot will be set to the enum EMPTY.
            }
        }

        playerMove = Space.X;
        count = 0;
        Players = new String[2];
        Players[0] = p1;
        Players[1] = p2;
    }

    public void play( TicTacToe TTT)
    {
        while (TTT.winner() == Result.INCOMPLETE)
        {
            int row, column;
            boolean Finish = false;

            do
            {
                TTT.printBoard();

                System.out.println(TTT.getCurrentPlayer() + "‘s move.");

                System.out.println(TTT.getCurrentPlayer() + ", Enter Row(1, 2, or 3): ");

                row = input.nextInt() - 1;

                System.out.println(TTT.getCurrentPlayer() + ", Enter Column(1, 2, or 3)");

                column = input.nextInt() - 1;

                if (!((row >= 0) && (row < 3) && (column >= 0) && (column < 3)))
                {
                    System.out.println("Out of bounds error.");
                }
                else
                {
                    if (!TTT.checkMove(row,column))
                    {
                        System.out.println("That square is taken.");
                    }
                    else
                    {
                        Finish = true;
                    }
                }
            }
            while (!Finish);

            TTT.changeMove();
        }
    }

    public void printBoard()
    {

        for (int i=0; i<3; i++)
        {
            System.out.println("-------------");
            System.out.print("| ");

            for (int j=0; j<3; j++)
            {
                System.out.print(getChar(Board[i][j]) + " | ");
            }
            System.out.println();
        }

        System.out.println("-------------");
    }

    public char getChar(Space p)
    {
        if (p == Space.X)
        {
            return  'X';
        }
        else if (p == Space.O)
        {
            return 'O';
        }
        else
        {
            return  ' ';
        }
    }

    public String getCurrentPlayer()
    {
        if (playerMove == Space.X)
        {
            return Players[0];
        }
        return Players[1];
    }

    public void changeMove()
    {
        if (playerMove == Space.X)
        {
            playerMove = Space.O;
        }
        else
        {
            playerMove = Space.X;
        }
    }

    public boolean checkMove(int r, int c)
    {
        if ((Board[r][c] == Space.EMPTY) && (r >= 0) && (r < 3) && (c >= 0) && (c < 3))
        {
            Board[r][c] = playerMove;
            count++;
            return true;
        }
        else
        {
            return false;
        }
    }

    public Result winner()
    {
        for (int i=0; i<3; i++)
        {
            if (SameArray(Board[i]))
            {
                return convertStatus(Board[i][0]);
            }
        }

        for (int i=0; i<3; i++)
        {
            if ((Board[0][i] == Board[1][i]) && (Board[1][i] == Board[2][i]))
            {
                return convertStatus(Board[0][i]);
            }

            if ((Board[0][0] == Board[1][1]) && (Board[1][1] == Board[2][2]))
            {
                return convertStatus(Board[0][0]);
            }

            if ((Board[2][0] == Board[1][1]) && (Board[1][1] == Board[0][2]))
            {
                return convertStatus(Board[2][0]);
            }
        }

        if (count == 9)
        {
            return Result.DRAW;
        }

        return Result.INCOMPLETE;
    }

    public Result convertStatus(Space p)
    {
        if (p == Space.X)
        {
            return Result.XWINS;
        }
        else if (p == Space.O)
        {
            return Result.OWINS;
        }
        return Result.INCOMPLETE;
    }

    private static boolean SameArray(Space[] word)
    {
        Space check = word[0];

        for (int i=1; i<word.length; i++)
        {
            if (check != word[i])
            {
                return false;
            }
        }

        return true;
    }

    public String winner(Result s)
    {
        if (s == Result.XWINS)
        {
            return Players[0];
        }
        else
        {
            return Players[1];
        }
    }

}