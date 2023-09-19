/*
 ==========================================================================
 = 		-C program written by Benyamin Ebadinia-                  =
 =                          -February 2021-                               =
 =                                                                        =
 =   *This program asks the user for information about watches and        =
 =  		    stores the structures into a linked list*		  =
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
#include <string.h>



struct watches { /* watch identifiers */
				char brand[50]; /* Brand of watch */
				char model[50]; /*SKU of watch */
				double value; /* Value of watch */
				struct watches *next; /* Link to next item */
				};
			struct watches *start, *current, *last;



void add_element (char var1[50], char var2[50], int var3) /* Putting info into the list */
{
	current = malloc(sizeof(struct watches));
	/* Stores user inputs to right places within the structure */
	strcpy(current->brand, var1);
	strcpy(current->model, var2);
	current->value = var3;
	current->next = NULL;
	if (start == NULL) /* First item in the list */
		start = current;
	else /* Hook up new element to list */
		last->next = current;
	last = current; /* Move last to the end of list*/
}



void print_list (void)
{
	int count = 0; /* Counts how many times the loop goes through and sums up values at the end */
	double sum = 0;
	current = start; /* Start at the beginning of the list */
	printf("\n\nYour list of watches is: \n");
	while (current != NULL) /* Prints until the end */
		{
			count = count + 1;
			sum = sum + current->value; /* Sums up all the values of the values */
			/* Prints out user Inputs in order */
			printf("\nWatch #%d \n", count);
			printf("Brand: %s\n", current->brand);
			printf("Model: %s\n", current->model);
			printf("Price: $%.2lf\n", current->value);
			current = current->next; /* Move to next item */
		}
	printf("There are %d watches and they sum up to $%.2lf\n", count, sum);
}



void main (void)
{	/* User inputs for the identifiers of the watch */
	char input1[50], input2[50];
	double input3 = 0;; 
	char fin[10]; /* User input to end program */
	int watchnum = 0; /* (FOR FUN) Prints out which watch number they are inputing info for */
	
	printf("This program creates and prints a list of watches. \n\n");
	start = NULL; /* Start at the beginning of the list */
	do /* Do-While loop comparing user input to Done to see when tpo end program */
		{
			watchnum = watchnum + 1; /* Adds 1 evertime the loop goes through */
			printf("WATCH #%d \n", watchnum);
			printf("Please enter brand name: ");
			gets(input1); /* Stores brand name into input 1 */
			printf("Please enter model number: ");
			gets(input2); /* Stores model number into input 2 */
			printf("Please enter price: ");
			scanf("%lf", &input3); /* Stores price into input 3 */
			getchar(); /* USed to grab newline from scanf */
			add_element(input1, input2, input3);
			printf("Type 'Done' or 'DONE' or 'done' to end program, otherwise press enter to continue \n");
			gets(fin); /* Stores user input into fin */	
		} while ((strcmp(fin, "Done") != 0)&&(strcmp(fin, "DONE") != 0)&&(strcmp(fin, "done") != 0)); /* Runs until user types "Done" */	
	print_list();	/* Calls function to print all the user inputs */
}
