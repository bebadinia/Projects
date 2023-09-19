/*
 ==========================================================================
 = 		-C program written by Benyamin Ebadinia-                  =
 =                          -October 2020-                                =
 =                                                                        =
 =      *This program translates English sentences into Pig Latin         =
 =   		  by scanning in a string from the user*	          =
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




void translate_Word (char segment[]) /* Function for translating word */
{
	int start = 0; /* For indexing the vowel */
	int end; 
	
	/* Checking to see where the vowel is in the word */
	while ((segment[start] != 'a')&&(segment[start] != 'e')&&(segment[start] != 'i')&&(segment[start] != 'o')&&(segment[start] != 'u')&&(segment[start] != '\0')
			&& (segment[start] != 'A')&&(segment[start] != 'E')&&(segment[start] != 'I')&&(segment[start] != 'O')&&(segment[start] != 'U'))
	{
		start = start + 1;
	}
	
	
	if ((start == 0)||(start == strlen(segment)))
	{
		printf("%sway ", segment); /* If vowel is first character, then print the word with "way" at the end */ 
	}
	else
	{
		for(end = start; end < strlen(segment); end++)
			printf("%c", segment[end]); /* To print statement from vowel to end of word */
		for(end = 0; end < start; end++)
			printf("%c", segment[end]); /* To print beginning of word to the vowel */
		printf("ay ");
	}
}



void main (void)
{
	char sentence[51]; /*user's input */
	char *psentence;
	
	/* Instructions */
	printf("This program will translate the sentence you input into Pig Latin. \n");
	printf("Type 'stop' when you no longer have anything you want to translate. \n");
	
	do {
			printf("\nPlease type in a sentence \n");
			gets(sentence);
			printf("The sentence you typed is \"%s\" \n\n", sentence);
		
			psentence = strtok(sentence, " "); /* Breaking up the sentence based on the spaces */
			
			printf("Your translated sentence is:\n");
			
			/* Sends psentence to get translated */
			while (psentence != NULL) /* while more words in string sentence */
			{
				translate_Word(psentence); /* Calls function to translate word */
				psentence = strtok(NULL, " ");		
			}
			
			printf("\n");
	
	
		} while ((strcmp(sentence, "stop") != 0)&&(strcmp(sentence, "Stop") != 0)&&(strcmp(sentence, "STOP") != 0)); /* Runs until user types "stop" */
	
}

