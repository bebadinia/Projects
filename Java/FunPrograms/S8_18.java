//Exercise 18.8

public class S8_18
{
    public static void main(String[] args)
    {
        String player1 = "Player X";
        String player2 = "Player O";

        TicTacToe TTT = new TicTacToe(player1, player2);

        TTT.play(TTT);

        TTT.printBoard();
        TicTacToe.Result status = TTT.winner();

        if (status == TicTacToe.Result.DRAW)
        {
            System.out.println("The result is a draw.");
        }
        else
        {
            System.out.println(TTT.winner(status)+ " has won the game.");
        }

    }
}

