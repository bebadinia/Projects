/*
 ==========================================================================
 = 				-C header file written by Benyamin Ebadinia-              =
 =                      -CS1311BN Programming 2-                          =
 =                          -April 2021-         	                      =
 =                                                                        =
 =  			 *This header file tutors people in CMain*     		      =
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



void CMain (void)
{
	char x; /*variable to hold user input*/
	
	printf("*** Main ***\n");
	printf("\n");
	printf("Every program in C has at least one function, always named main, that is always called when your program first executes.\n"); 
	printf("From main, you can also call other functions from within the main function.\n");
	printf("Main is the first thing that is run and is essentially the starting point of your program.\n");
 	printf("Main has a return type of void and usually has a parameter of void, however, can have parameters.\n");
	printf("If you want to learn more about main parameters, check out MainParameters from the main menu\n");
	printf("If you want to learn more about functions aside from main, check out Functions from the main menu\n");
	printf("\n");
	printf("The syntax of Main is:\n");
	printf("     void main (void)\n");
	printf("     {\n");
	printf("        Statements\n");
	printf("     {\n");
	printf("\n");
	printf("Do you want to see examples(type y for yes)?\n");
	
	x = getchar(); /*gets user input*/
	if ((x == 'y') || (x == 'Y')) /*loop runs if user puts y or Y*/
		{
			printf("*** Main Examples ***\n");
			printf("\n");
			printf("Here are some examples of Main:\n");
			printf("     void main (void)\n");
			printf("     }\n");
			printf("        printf(\"Hello World\");\n");
			printf("     {\n");
			printf("The first function that gets called is main which in turn calls a different function called \"printf()\" from the 'stdio.h' library.\n");
			printf("\"Hello World\" is printed from this action.\n");
			printf("\n");
			printf("     void main (void)\n");
			printf("     {\n");
			printf("        getInt();\n");
			printf("     }\n");
			printf("The first function that gets called is main which in turn calls a different function called \"getInt()\" that is defined by the user above main.\n");
		}
		
	printf("\n");
}
