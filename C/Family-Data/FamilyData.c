/*
 ==========================================================================
 = 		-C program written by Benyamin Ebadinia-                  =
 =                          -November 2020-                               =
 =                                                                        =
 =      *This program read in data from familyin.txt and format it        =
 =   		  then output the result to familyout.txt*	          =
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



struct family {
	char name[50]; /* First & Last Name */
	char street[50]; /* Physical Address */
	char csz[50]; /* City, State, Zip code */
	char relation[50]; /* Relationship */
	char birthday[30]; /* Birthday in mm-dd-yyyy format */
};
struct family people[7]; /* Setting up an array of structures for 7 people */

FILE *familyin, *familyout;  /* access to familyin.txt and familyout.txt files */


/* Funtion to change mm-dd-yyyy to MONTH dd, yyyy */
void bday_con (char bday[])
{
	char mm[3];	/* holds month string */
	char dd[3]; /* holds day string */
	char yyyy[6]; /* holds year string */
	char Written[12]; /* holds written value of month */
	int day; /* holds int value of day */
	int month; /* holds int value of month */
	
	strcpy(mm, strtok(bday, "-")); /* up to first dash goes in 'mm' */
	strcpy(dd, strtok(NULL, "-")); /* from first dash to second dash goes in 'dd' */
	strcpy(yyyy, strtok(NULL, "-")); /* from second dash to the end goes into 'yyyy' */
	
	month = atoi(mm); /* changes the string for say into an int */
	day = atoi(dd); /* changes the string for month into an into to use in switch */
	
	/* switch statement that puts the written form of the month based on the int form of month */
	switch (month)
	{
		case 1:
			strcpy(Written, "January");
			break;
		case 2:
			strcpy(Written, "February");
			break;
		case 3:
			strcpy(Written, "March");
			break;
		case 4:
			strcpy(Written, "April");
			break;
		case 5:
			strcpy(Written, "May");
			break;
		case 6:
			strcpy(Written, "June");
			break;
		case 7:
			strcpy(Written, "July");
			break;
		case 8:
			strcpy(Written, "August");
			break;
		case 9:
			strcpy(Written, "September");
			break;
		case 10:
			strcpy(Written, "October");
			break;
		case 11:
			strcpy(Written, "November");
			break;
		case 12:
			strcpy(Written, "December");
			break;
		default:
			strcpy(Written, "No Month");
			break;
	}
				
	printf("%s %d, %s \n", Written, day, yyyy);
	fprintf(familyout, "%s %d, %s \n ", Written, day, yyyy);
}



void cal_Age (char bday[])
{
	char yyyy[6]; /* holds the string form of year */
	int year; /* holds int form of year */
	
	strncpy(yyyy, &bday[6], 4); /* copies last 4 digits of bday into 'yyyy' */
	year = atoi(yyyy); /* changes the string 'yyyy' into an int */
	
	printf("%d \n", 2020 - year); /* 2020 - year gives the age */
	fprintf(familyout, "%d \n", 2020 - year);


}



void main (void)
{
	int v; /* used to index for loop*/
	

	familyin = fopen("familyin.txt", "r"); /* reads in data from familyin.txt file */
	familyout = fopen("familyout.txt", "w"); /* outputs data from familyout.txt file */
	
	for (v = 0; v < 7; v++) /* loop runs 7 times to read in all the information for each person */
		{
			fgets(people[v].name, 49, familyin); /* reads in first line which is name */
			people[v].name[strlen(people[v].name)-1] = '\0'; /* removes newline at end of line */
			fgets(people[v].street, 49, familyin); /* reads in second line which is address */
			people[v].street[strlen(people[v].street)-1] = '\0'; /* removes newline at end of line */
			fgets(people[v].csz, 49, familyin); /* reads in third line which is city, state, zip */
			people[v].csz[strlen(people[v].csz)-1] = '\0'; /* removes newline at end of line */
			fgets(people[v].relation, 49, familyin); /* reads in fourth line which is realtionship */
			people[v].relation[strlen(people[v].relation)-1] = '\0'; /* removes newline at end of line */
			fgets(people[v].birthday, 29, familyin); /* reads in five line which is birthday */
			people[v].birthday[strlen(people[v].birthday)-1] = '\0'; /* removes newline at end of line */
		}
	
	for (v = 0; v < 7; v++) /* loop runs 7 times to print out the information for each person */
		{
			printf("%s		Relation: %s \n", people[v].name, people[v].relation);
			fprintf(familyout, "%s		Relation: %s \n", people[v].name, people[v].relation);
			printf("%s		Birthday: ", people[v].street);
			fprintf(familyout, "%s		Birthday:", people[v].street);
			bday_con(people[v].birthday); /* call to change format of the birthday */
			printf("%s	Age: ", people[v].csz);
			fprintf(familyout, "%s	Age: ", people[v].csz);
			cal_Age(people[v].birthday); /* call to calculate age of the person */
			printf("\n");
		}
	
	fclose(familyin); /* closes input file */
	fclose(familyout); /* closes output file */

}
