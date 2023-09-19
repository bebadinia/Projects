/*
 ==========================================================================
 = 				-C program written by Benyamin Ebadinia-                  =
 =                      -CS1311BN Programming 2-                          =
 =                          -March 2021-         	                      =
 =                                                                        =
 =   *This program asks the user 7 numbers and generates 7 random         =
 =  	numbers and prints out both in order and checks to see if		  =
 =						there are any matches*							  =
 =																          =
 =              		     			                            	  =
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
#include <stdlib.h>
#include <time.h>



void print_array(int list[]) /* Prints contents of the array */
{
	int i; /* For indexing through loop */
	
	for (i=0; i<7; i++) /* Goes through every space of array */
		printf("%i ", list[i]);
	
	printf("\n");
}



void sort_array(int list[]) /* Function to bubble sort array */
{
	int i, temp, sorted; /* i is index; temp is a place holder; sorted checks if any more sorting can be done */
	
	do  /* Loop runs through until every number is sorted */
	{
		sorted = 1; /* Starts sorted at 1 to not only run one time through */
		
		for (i=0; i<6; i++) /* Indexes through every space in the array */
		{
			if (list[i] > list[i+1]) /* If first variable is greater than the one to it's right */
			{
				temp = list[i]; /* Temporarly holds bigger variable */
				list[i] = list[i+1]; /* Puts smaller variable in first holder */
				list[i+1] = temp; /* Puts bigger variable in second holder */
				sorted = 0; /* Confirms array is sorted */
			}
		}
	} while (sorted == 0); /* Runs until array is sorted */
	
}




int duplicate_check(int num, int list[]) /* Function to check for duplicates within one array */
{
	int v; /* Index to step through array */

	for (v=0; v<7; v++) /* For loop to check for duplicates */
	{
		if (list[v] == num) /* If there is a duplicate, 1 returns */
			return 1;
	}
	
	return 0; /* If there is no duplicate, 0 returns */
}




void main (void)
{
	int user[7] = {0,0,0,0,0,0,0}; /* Array for user inputs */
	int random[7] = {0,0,0,0,0,0,0}; /* Array for random numbers */
	int index = 0; /* Index to step through an array */
	int temp; /* Hold one number to store into array */
	int u, r; /* Indexes to check for matches */
	int is_unique; /* Holds return value from duplicate_check */
	int count = 0; /* Counts how many matches there were */
	
	printf("Try to guess the lottery numbers and you win! \n");
	printf("Please type in 7 numbers between 1 to 50 \n");
	
	while(index<7) /* While-Loop to fill up fill up user array */
	{
		scanf("%i", &temp);
		if((temp > 0) && (temp < 51)) /* Checks if user input is within range */
		{
			is_unique = duplicate_check(temp, user); /* Stores return value in is_unique */
			if (is_unique == 0) /* If there is no duplicates */
			{	
				user[index] = temp; /* Stores user input into user array */
				index++; /* Index increments */
			}
			else /* If there is a duplicate */
			{
				printf("That is a duplicate. Try again! \n\n");
			}
		}
		else /* If user input is not within range */
		{
			printf("That is not within range. Try again! \n\n");
		}
	}
	
	printf("\n");
	index = 0; /* Resets index */
	
	srand(time(NULL));
	while(index<7) /* While-Loop to fill up fill up random array */
	{
		temp = rand()%50+1; /* Gets a random number between 1 and 50 */
		is_unique = duplicate_check(temp, random); /* Stores return value in is_unique */
		if (is_unique == 0) /* If there is no duplicates */
		{	
			random[index] = temp; /* Stores user input into random array */
			index++; /* Index increments */
		}
		
	}
	
	printf("Your numbers: ");
	print_array(user); /* Prints unsorted user array */
	printf("Random numbers: ");
	print_array(random); /* Prints unsorted random array */
	sort_array(user); /* Sorts user array */
	sort_array(random); /* Sorts random array */
	printf("Your sorted numbers: ");
	print_array(user); /* Prints sorted user array */
	printf("Random sorted numbers: ");
	print_array(random); /* Prints sorted random array */
	
	printf("\nYou have matched the following numbers: ");
	for (r=0; r<7; r++) /* Cycles through both arrays */
		{
		  for (u=0; u<7; u++)
		  {
		  	if (user[u] == random[r])
		  	{
		  		printf("%i ", user[u]);
		  		count++; /* Increments count by 1 */
			}
		  }
		}
	printf("\nYou matched %i times. \n", count);
}
