/*
 ==========================================================================
 = 		-C program written by Benyamin Ebadinia-                  =
 =                          -February 2021-                               =
 =                                                                        =
 =   *This program calculates the input of the user in the equation       =
 =  		 f(x)=4x^2+8x+1 the standard way			  =
 =	f(z)=f(z-1)+8z+4 with f(0)=1 recursively*		          =
 =              		     		                    	  =
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
#include <math.h>



int RecurQuad (int z) /* Function to calculate equation recursively */
{
	if (z == 0) /* Lowest point before it sends it back */
		return 1; /* This is because f(0) = 1 */
	else
		return (RecurQuad(z-1) + 8*z + 4); /* Calls back the function with a number 1 less than it */
}



void main (void)
{
	int num; /* User Input */
	int result; /* Stores the number after the calculation */
	char repeat = 'n'; /* Variable to check if the user wants to run again */
	
	printf("This program calculates your input in place of x in the equation y = 4x^2 + 8x + 1 and prints out the result two ways.");
	
	do /* Do-While loop to run program again if user says Y */
	{
		printf("\n\nPlease input a number greater than zero: "); 
		scanf("%i", &num); /* Gets input from user to plug into equations */
		printf("You entered %i. \n\n", num);
	
		if (num > 0) /* Checks if user input is a positive integer */
		{
			result = (4*pow(num,2)) + (8 * num) + 1; /* Calculates the result the standard way */
			printf("The answer the standard way of y=4x^2+8x+1 is:  %i. \n", result);
			
			result = RecurQuad(num); /* Send user input to RecurQuad function to calculate recursively */
			printf("The answer the recursive way of f(z)=f(z-1)+8z+4 with f(0)=1 is:  %i. \n", result);
		}
		else /* If user input input is negative or 0 */
		{
			printf("That is not a number greater than zero, please try again.");
		}
		
		/* reads in user input to see if the want to print program again */
		getchar(); /* reads the newline character waiting to be read. */
		printf("\n\nWould you like run again? (y for yes) \n\n");
		scanf("%c", &repeat);
	} while (repeat=='y' || repeat=='Y');
	
	printf("\nHave a great day!");
}
