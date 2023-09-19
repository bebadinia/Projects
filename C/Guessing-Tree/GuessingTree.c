/*
 ==========================================================================
 = 		-C program written by Benyamin Ebadinia-                  =
 =                          -March 2021-         	                  =
 =                                                                        =
 =   *This program guesses the number that the user is thinking of        =
 =  				by using trees*			          =
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
#include <stdlib.h>



struct tree20{
	int num;
	struct tree20 *less;
	struct tree20 *more;
};
struct tree20 *active;
struct tree20 one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, seventeen, eighteen, nineteen, twenty; /* nodes */



void create_tree (void)   /* makes the binary tree */
 {
  ten.num = 10;
  ten.less = &five;
  ten.more = &fifteen;
  five.num = 5;
  five.less = &three;
  five.more = &seven;
  fifteen.num = 15;
  fifteen.less = &thirteen;
  fifteen.more = &eighteen;
  three.num = 3;
  three.less = &two;
  three.more = &four;
  seven.num = 7;
  seven.less = &six;
  seven.more = &nine;
  thirteen.num = 13;
  thirteen.less = &twelve;
  thirteen.more = &fourteen;
  eighteen.num = 18;
  eighteen.less = &seventeen;
  eighteen.more = &nineteen;
  two.num = 2;
  two.less = &one;
  two.more = &three;
  four.num = 4;
  four.less = &three;
  four.more = &five;
  six.num = 6;
  six.less = &five;
  six.more = &seven;
  nine.num = 9;
  nine.less = &eight;
  nine.more = &ten;
  twelve.num = 12;
  twelve.less = &eleven;
  twelve.more = &thirteen;
  fourteen.num = 14;
  fourteen.less = &thirteen;
  fourteen.more = &fifteen;
  seventeen.num = 17;
  seventeen.less = &sixteen;
  seventeen.more = &eighteen;
  twenty.num = 20;
  twenty.less = &nineteen;
  twenty.more = NULL;
  one.num = 1;
  one.less = NULL;
  one.more = &two;
  eight.num = 8;
  eight.less = &seven;
  eight.more = &nine;
  eleven.num = 11;
  eleven.less = &ten;
  eleven.more = &twelve;
  sixteen.num = 16;
  sixteen.less = &fifteen;
  sixteen.more = &seventeen;
  nineteen.num = 19;
  nineteen.less = &eighteen;
  nineteen.more = &twenty;     
  printf("Let's start the game! \n\n");
 }
 
 
 
 void print_options (void) /* Makes the menu for user options */
 {
 	printf("  ------------------------------------------  \n");
	printf(" | 	   	Is %i your number?    	    | \n", active->num);
	printf(" | Type 1, 2 or 3 depending on the choice   | \n");
	printf(" | 1. Is your number less than %i? 	    | \n", active->num);
	printf(" | 2. Is your number more than %i? 	    | \n", active->num);
	printf(" | 3. %i is correct			    | \n", active->num);
	printf("  ------------------------------------------  \n");

 }
 
 
 
 void main (void)
 {
 	int choice = 0; /* holds user selection from menu options */
 	
 	printf("Think of a number between 1 and 20. Make sure you don't forget it ;) \n");
 	create_tree(); /* Calls function to create the binary tree */
 	
 	active = &ten; /* Starts the program at 10 for initial guess */
 	while ((choice != 3)&&(active != NULL)) /* While not quit */
 	{
 		print_options(); /* Calls function to print menu */
 		scanf("%i", &choice); /* Stores user inpput in choice */
 		
 		switch(choice) /* Move down the tree */
 		{
 			case 1:
 				active = active->less;
 				break;
 			case 2:
 				active = active->more;
 				break;
 			case 3:
 				printf("Huzzah! I'm a magician. \n");
 				break;
 			default:
 				printf("%i is not an option silly! Read the list again... \n", choice);
		 
		}
 		
	}
 	
 	if (active == NULL) /* Outside of bounds */
 	{
 		printf("That is not within the range of numbers that I said!");
	}
 }

