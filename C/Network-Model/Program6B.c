/*
 ==========================================================================
 = 				-C program written by Benyamin Ebadinia-                  =
 =                      -CS1311BN Programming 2-                          =
 =                          -March 2021-         	                      =
 =                                                                        =
 =   *This program creates a network for a bed with 6 objects and         =
 =  		prints out each object and connection one at a time*		  =
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
#include <string.h>



struct bed{		/* Structure of a bed */
			char part[20];
			char material[20];
			struct bed *touches1;
			struct bed *touches2;
			struct bed *onTop;
		};
struct bed headboard, bottomFrame, mattress, fittedSheet, bedPillows, flatSheet, pillowCover, duvet; /* Setting up nodes */



/* Debug Code */
enum test{no,yes};
enum test testing;	/** if testing==yes, print values - address **/



void addParts (struct bed *B, char component[], char stuff[], struct bed *T1, struct bed *T2, struct bed *oT) /* Assigns every variable to its place within the network */
{
	if(testing == 1)	/* Debug Code */
		printf("Adding part %s at %p \n", component, B);
	
	strcpy(B->part, component); //B.part = component
	strcpy(B->material, stuff); //B.material = stuff;
	B->touches1 = T1; //B.touches1 = T1
	B->touches2 = T2; //B.touches2 = T2
	B->onTop = oT; //B.onTop = oT
	
	if(testing == 1) /* Debug Code */
		printf("%s has been added \n", B->part);
}



void createParts (void) /* Function that actually fills the nodes with information */
{
	if(testing == 1) /* Debug Code */
		printf("Creating the parts. \n");
	
	/* Calls add parts function to create each node with its connections & identifiers */
	addParts(&headboard, "Headboard", "Gold", &bottomFrame, &mattress, NULL);
	addParts(&bottomFrame, "Bottom Frame", "Wood", &headboard, &mattress, NULL);
	addParts(&mattress, "Mattress", "Memory Foam", &bottomFrame, &headboard, NULL);
	addParts(&fittedSheet, "Fitted Sheet", "Polyester Blend", NULL, NULL, &mattress);
	addParts(&bedPillows, "Bed Pillows", "Feather", NULL, NULL, &fittedSheet);
	addParts(&flatSheet, "Flat Sheet", "Cotton", NULL, NULL, &fittedSheet);
	addParts(&pillowCover, "Pillow Cover", "Silk", NULL, NULL, &bedPillows);
	addParts(&duvet, "Duvet", "Wool", NULL, NULL, &flatSheet);
}



void printParts(struct bed *A) /* Function to print each node and it's identifier and connections when it is called */
{
	printf("Part: %s \n", A->part); /* Prints the name */
	
	if (testing == 1) /* Debug Code */
		printf("The address of this part is %p \n", A);
		
	printf("Material: %s \n", A->material); /* Prints Identifier/Material */
	
	if (A->touches1 != NULL) /* If connection exists print what it touches */
		printf("Touches: %s \n", A->touches1->part);
		
	if (A->touches2 != NULL) /* If connection exists print what it touches */
		printf("Touches: %s \n", A->touches2->part);
		
	if (A->onTop != NULL) /* If connection exists print what it's on top of */
		printf("On top of: %s \n", A->onTop);

	printf("\n\n");
}



void main (int argc, char *argv[])
{
	if ((argc >= 2) && (strcmp(argv[1], "debug") == 0)) /* Debug Code */
		{
			testing = yes;
		}
	
	printf("This program shows the connections in a network of components in a bed. \n\n");
	testing = 1;
	createParts(); /* Calls createParts function to create the bed network */
	
	/* A bunch of calls to printParts function to print each individual node and its connection */
	printParts(&headboard); 
	printParts(&bottomFrame);
	printParts(&mattress);
	printParts(&fittedSheet);
	printParts(&bedPillows);
	printParts(&flatSheet);
	printParts(&pillowCover);
	printParts(&duvet);
}

