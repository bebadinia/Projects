/*
 ==========================================================================
 = 		-C program written by Benyamin Ebadinia-                  =
 =                          -October 2020-                                =
 =                                                                        =
 =      *This program will allow 2 player to play Tic Tac Toe by          =
 =   	scanning in a number according to a guide using an array          =
 =		        	___       ___				  =
 =			       /   \ ~~~ /   \				  =
 =			 ,----(       . .     )				  =
 =			/      \___    	  ___/				  =
 =		      /|           (\    |(	 			  =
 =		      ^ \   /___\   /\   |				  =
 =			 |  |   |  |__\  |				  =
 =			 |__|   |__|    "" 				  =
 ==========================================================================
*/

#include <stdio.h>

char ttt[3][3]; /* set up board for all functions */
int result = 0; /* if result = 0 means draw; if result = 1 means win */
char player = 'X'; /* changes from 'X' to 'O' depending on turn */
int moveCounter = 0; /* count how many turns have gone and makes sure it's less than 10 */
int hrz, vrt; /* horizontal & vertical */
int choice = 10; /* initialized to 10 so that it runs in while loop */



void ShowBoard (void) /* prints out board with array values */
{
	/* Key Board */
	printf("		\\/\\/\\/\\/\\/|\\/\\/\\/\\/\\|\\/\\/\\/\\/\\/ \n");
	printf("		|         |         |         | \n");
	printf("		|    1    |    2    |    3    | \n");
	printf("		|_________|_________|_________| \n");
	printf("		|         |         |         | \n");
	printf("		|    4    |    5    |    6    | \n");
	printf("		|_________|_________|_________| \n");
	printf("		|         |         |         | \n");
	printf("		|    7    |    8    |    9    | \n");
	printf("		|         |         |         | \n");
	printf("		\\/\\/\\/\\/\\/|\\/\\/\\/\\/\\|\\/\\/\\/\\/\\/ \n\n\n");
	
	
	/* Actual Game Board */
	printf("		\\/\\/\\/\\/\\/|\\/\\/\\/\\/\\|\\/\\/\\/\\/\\/ \n");
	printf("		|         |         |         | \n");
	printf("		|    %c    |    %c    |    %c    | \n", ttt[0][0], ttt[0][1], ttt[0][2]);
	printf("		|_________|_________|_________| \n");
	printf("		|         |         |         | \n");
	printf("		|    %c    |    %c    |    %c    | \n", ttt[1][0], ttt[1][1], ttt[1][2]);
	printf("		|_________|_________|_________| \n");
	printf("		|         |         |         | \n");
	printf("		|    %c    |    %c    |    %c    | \n", ttt[2][0], ttt[2][1], ttt[2][2]);
	printf("		|         |         |         | \n");
	printf("		\\/\\/\\/\\/\\/|\\/\\/\\/\\/\\|\\/\\/\\/\\/\\/ \n");

}



void PlayerChoice (void)  /* allows a player to make a choice and initialize a place in ttt with 'X' or 'O'*/
{
	do {
			do { /* runs a do-while to scan in a number within the range from the player */
					printf("Type in the number (1-9) where you want to place your marker: ");
					scanf("%d", &choice);
				} while ((choice < 1) || (choice > 9)); /* runs the loop until a number from 1-9 is put in */
				
			switch (choice) /* switch statement to initialize hrz & vrt based on player choice */
				{
					case 1:
						hrz = 0;
						vrt = 0;
						break;
					case 2:
						hrz = 0;
						vrt = 1;
						break;
					case 3:
						hrz = 0;
						vrt = 2;
						break;
					case 4:
						hrz = 1;
						vrt = 0;
						break;
					case 5:
						hrz = 1;
						vrt = 1;
						break;
					case 6:
						hrz = 1;
						vrt = 2;
						break;
					case 7:
						hrz = 2;
						vrt = 0;
						break;
					case 8:
						hrz = 2;
						vrt = 1;
						break;
					case 9:
						hrz = 2;
						vrt = 2;
						break;
					default:
						printf("Not a correct input.");
				}
		} while (ttt[hrz][vrt] != ' '); /* makes sure that the same place is chosen  */ 
}



void CheckWin (void) /* to compare the variables and see if they form a pattern */
{
	if ((ttt[0][0] == player && ttt[0][1] == player && ttt[0][2] == player) ||  /* checks horizontal top */
		(ttt[1][0] == player && ttt[1][1] == player && ttt[1][2] == player) ||  /* checks horizontal mid */
		(ttt[2][0] == player && ttt[2][1] == player && ttt[2][2] == player) ||  /* checks horizontal bottom */ 
		(ttt[0][0] == player && ttt[1][0] == player && ttt[2][0] == player) ||  /* checks vertical left */
   		(ttt[0][1] == player && ttt[1][1] == player && ttt[2][1] == player) ||  /* checks vertical mid */
   		(ttt[0][2] == player && ttt[1][2] == player && ttt[2][2] == player) ||  /* checks vertical right */
   		(ttt[0][0] == player && ttt[1][1] == player && ttt[2][2] == player) ||  /* checks diagonal 1 */
   		(ttt[2][0] == player && ttt[1][1] == player && ttt[0][2] == player))    /* checks diagonal 2 */
   			result = 1; /* makes result one so that the player wins */
}



void main (void)
{
	for (hrz = 0; hrz <= 2; hrz++) /* these 2 for loops are for filling the spaces */
		for (vrt = 0; vrt <= 2; vrt++)
			ttt[hrz][vrt] = ' '; /* initializing all number to empty space */
	
	
	
					/* Rules and Guidelines */
	printf("		  Welcome to Ticcey-Taccey-Toe              \n");
	printf("You will choose a number from 1-9 that corresponds to " 
			"a space shown below when it is your turn. \n");
	printf("Get 3 'X' or 'O' in a row to win. The first player is 'X'. Good luck! \n");
	
	
	while ((result == 0) && (moveCounter < 9))  /* loop while there is no winner or tie */
		{
			ShowBoard();  /* shows the p=board with inputs */
			PlayerChoice();  /* lets the player make their choice */
			printf("\n");
			ttt[hrz][vrt] = player; /* stores either an 'X' or an 'O' in the space chosen */
			moveCounter = moveCounter + 1; /* increments moveCounter by 1 */
			CheckWin(); /* checks is the game is finished */
			
			if (player == 'X')  /* checks what's in player to see if the letter needs to be changed */
				player = 'O';
			else
				player = 'X';
		}
	
	
	if (result == 1) /* displays winning statement */
		{

			if (player == 'X')  /* To change the variable back to who won */
				player = 'O';
			else
				player = 'X';
			
			ShowBoard(); /* to show the board one last time */
			
			printf("Hooray! Player '%c' has won the game.", player);
		}
	else /* displays draw message */
		{
			ShowBoard(); /* to show the board one last time */
		
			printf("Better luck next time! Both players drew.");	
		}
		
}
