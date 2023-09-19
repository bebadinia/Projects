/*
 ==========================================================================
 = 		-C program written by Benyamin Ebadinia-                  =
 =                          -February 2021-                               =
 =                                                                        =
 =      *This program read in data from names.txt and format it           =
 =   	     vertically then output the result to trans.txt*	          =
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
#include<stdio.h>
#include<string.h>
#include <stdlib.h>



void main (void)
{
	char name[20][60]; /* setting up an array for 20 people's names */
	int v, place; /* used to index for loop and individually print the letter */
	FILE *names, *trans; /* access to names.txt and trans.txt files */
	
	names = fopen("names.txt", "r"); /* reads in data from names.txt file */
	trans = fopen("trans.txt", "w"); /* outputs data from trans.txt file */
	
	for (v = 0; v < 20; v++) /* these 2 for loops are for filling the spaces */
		for (place = 0; place < 60; place++)
			name[v][place] = ' '; /* initializing all letters to an empty space */
	
	printf("The original names are: \n");
	
	for (v = 0; v < 20; v++) /* loop runs 20 times to read in all the names for each person */
	{
		fgets(name[v], 60, names); /* reads in line */
		printf(name[v]);
	}
	
	printf("\n\nThe formatted names are: \n\n");
	
	for (place = 0; place < 60; place++) /* these 2 for loops increments through every letter */
	{	
		for (v = 0; v < 20; v++)
		{	
			if ((name[v][place] != '\n') && (name[v][place] != '\0')) /* checking if there are still more letter in the name */
			{
				printf("%c", name[v][place]); /* prints out the letter to the screen and file*/
				fprintf(trans, "%c", name[v][place]);
			}
			else
			{
				printf(" ", name[v][place]); /* prints out blank to the screen and file*/
				fprintf(trans, " ", name[v][place]);
			} 
			printf("  ");
			fprintf(trans, "  ");
		}

		printf("\n");
		fprintf(trans, "\n");
	}
	
	fclose(names); /* closes input file */
	fclose(trans); /* closes output file */

}
