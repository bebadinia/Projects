/*
 ==========================================================================
 = 		-C header file written by Benyamin Ebadinia-              =
 =                          -April 2021-         	                  =
 =                                                                        =
 =  	      *This header file tutors people in Functions*               =
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



void Functions (void)
{
	char x; /*variable to hold user input*/
	
	printf("*** Functions ***\n");
	printf("\n");
	printf("A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions.\n"); 
	printf("You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division usually is such that each function performs a specific task.\n");
 	printf("A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.\n");
 	printf("A function is known with various names like a method or a sub-routine or a procedure etc.\n");
 	printf("A common reason for creating a function is code reuse to save time and space by not having to rewrite every aspect of something and calling the function when you want to do a specific action.\n");
 	printf("A function needs to be positioned above where it is called from. A function can be called from Main or other functions.\n");
	printf("If you want to learn more about the main function, check out CMain from the main menu\n");
	printf("\n");
	printf("The syntax of a Function is:\n");
	printf("     <Return Type> <Function Name> <Parameter List>\n");
	printf("     {\n");
	printf("        Statements\n");
	printf("     {\n");
	printf("The return type is the data type of the value the function return. A function may contain no return value. This can be an int, double, char or void which is no value.\n");
	printf("Function Name is the actual name of the function. The function name and the parameter list together constitute the function signature.\n");
	printf("The parameter list is a set of variable that the function is going to use that are passed in by the calling function.\n");
	printf("The parameter list refers to the type, order, and number of the parameters of a function. A function may contain no parameters.\n");
	printf("Statements contains a collection of statements that define what the function does and executes.\n");
	printf("\n");
	printf("Do you want to see examples(type y for yes)?\n");
	
	x = getchar(); /*gets user input*/
	if ((x == 'y') || (x == 'Y')) /*loop runs if user puts y or Y*/
		{
			printf("*** Function Examples ***\n");
			printf("\n");
			printf("Here are some examples of Functions:\n");
			printf("     void Print_Line (void)\n");
			printf("     {\n");
			printf("        printf(\"Hello World\");\n");
			printf("     }\n");
			printf("When Print_Line is called, it is called with no parameters so passing a parameter would cause an error. The function prints out a line.\n");
			printf("Since, return type of the function is void, no value is returned.\n");
			printf("\n");
			printf("     int Add_Return (void)\n");
			printf("     {\n");
			printf("        int n = 5 + 5;\n");
			printf("        return n;\n");
			printf("     }\n");
			printf("When Add_Return is called, it is called with no parameters so passing a parameter would cause an error. The function creates a variable called n and makes it do simple addition, 5 + 5, then returns the n value.\n");
			printf("Since the return type of the function is an int, it returns the number 10 back to the calling function.\n");
			printf("\n");
			printf("     void Double_N (int n)\n");
			printf("     {\n");
			printf("        printf(\"%%i doubled is %%i:\", n, 2*n);\n");
			printf("     }\n");
			printf("In the above function, Double_N is called with a parameter n which is an int. The int n is passed from the calling function to Double_N. The function prints out doubles the value of n.\n");
			printf("Since, return type of the function is void, no value is returned.\n");
			printf("\n");
			printf("     double Double_Return (double n)\n");
			printf("     {\n");
			printf("        double x = 2*n;\n");
			printf("        return x;\n");
			printf("     }\n");
			printf("In the above function, Double_N is called with a parameter n which is a double. The double n is passed from the calling function to Double_Return. The function creates a variable, x, and makes it double the value of n.\n");
			printf("Since, return type of the function is a double, it returns x back to the calling function, which is double the number that was passed in.\n");
			printf("\n");
		}
		
	printf("\n");
}
