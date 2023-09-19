/*
 ==========================================================================
 = 				-C program written by Benyamin Ebadinia-                  =
 =                      -CS1310V1 Programming 1-                          =
 =                          -October 2020-                                =
 =                                                                        =
 =      *This program will get 2 positive integer inputs and outputs      =
 =   	the factors and prime optimization of each and the LCM & GCF      =
 =       of both*		     			                            	  =
 =				    ___       ___				  						  =
 =			       /   \ ~~~ /   \				  						  =
 =			 ,----(       . .     )				  						  =
 =			/      \___    	  ___/				  						  =
 =		   /|	       (\    |(				  							  =
 =		  ^ \   /___\   /\   |				  							  =
 =			 |  |   |  |__\  |				  							  =
 =			|__|   |__|    "" 				  							  =
 ==========================================================================
*/

#include <stdio.h>



int get_Input (void) /* Gets input from user for firstNum & secondNum */
{
	int num = 0;  
	do {    /* repeats this segment until user inputs a calculatable number */
	printf("Please input a positive integer: ");
	scanf("%d", &num);
	printf("You entered %d.\n\n", num); 
	} while (num < 1);
	return num;
}



void get_Factors (int num) /* Gets factors for each variable */
{
	int i; /* for loop */
	printf("The factors for %d are: ", num);
	for (i = 1; i <= num; i++) /* checking from 1-num */
	{
		if (num % i == 0) /* ensuring there is no remainder */
		{
			printf("%d ", i);
		}
	}
}


/* Got this code from Prof Redfield */
void prime_Factorization (int num) /* Gets prime factors for each variable */
{
	int count = 1;
	printf("The prime factors for %d are: ", num);
	while (count < num) /*check 2+; dividend left over */
	{
		count = count + 1;
		if (num%count == 0) /* count divides into num */
		{
			printf("%d ", count);
			num = num/count; /* decrease num */
			count = count - 1; /* try prime factor again */
		}
	}

}



void get_GCF (int num1, int num2) /* Gets the GCF of both integers */
{
	int variable; /* to store smallest integer in */
	
	variable = num1; /* putting the first integer in variable */
	
	/* while loop to calculate GCF */
	while (!((num1 % variable == 0) && (num2 % variable == 0))) 
	{	
		variable = variable - 1;
	}
	
	printf("The GCF of %d and %d is %d.\n", num1, num2, variable);
}



void get_LCM (int num1, int num2) /* Gets the GCF of both integers */
{
	int variable; /* to store largest integer in */
	
	variable = num1; /* putting the first integer in variable */
	
	while (!(variable % num2 == 0)) /* checking multiple of num1 against num2 */
	{	
		variable = variable + num1;   /* getting the next multiple of num1 */
	}
	
	printf("The LCM of %d and %d is %d.\n", num1, num2, variable);
}

void main (void)
{
	int count=1, number; /* count the number of lops; user's value */
	char runagain = 'n'; /* to ask user to run program again */
	
	do { /* prints count up until user says no */
		int firstNum, secondNum; /* Store a user input in each one */
		
		printf("================================================================="
				"===================================================\n");
		printf("This program allows you to input two integers and see the factors, "
				"prime factorization, GCF and LCM of both numbers.\n\n");
		
		firstNum = get_Input(); /* Gets first integer */
		secondNum = get_Input(); /* Gets second integer */
		printf("Your values are %d and %d.\n\n", firstNum, secondNum);
		
		get_Factors(firstNum); /* Gets the factors for the first integer */
		printf("\n");
		get_Factors(secondNum); /* Gets the factors for the second integer */
		printf("\n");
		
		/* Got this code from Prof Redfield */
		prime_Factorization(firstNum); /* Gets the prime factors for the first integer */
		printf("\n");
		prime_Factorization(secondNum); /* Gets the prime factors for the second integer */
		printf("\n");
		
		get_GCF(firstNum, secondNum); /* Gets the GCF of both integers */
			
		get_LCM(firstNum, secondNum); /* Gets the LCM of both integers */
		
		printf("=================================================================="
				"==================================================\n");
		
		/* reads in user input to see if the want to print program again */
		getchar(); /* reads the newline character waiting to be read. */
		printf ("\n\nWould you like to print again? (y for yes, n for no) ");
		scanf("%c", &runagain);
	} while (runagain=='y' || runagain=='Y');
}
