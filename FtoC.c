#include <stdio.h>	//We're using functions defined in stdio.h, so we include it 

//If we had any user defined functions, the function prototypes would go here
//Your function prototypes need to appear before your function definitions 
//Moral of the story, in C order of information matters 

int main(void){ //We have a main function that takes 0 parameters
				//We can leave the space between main() blank, but its' good form to have void there

	float fh, cl;	//We are declaring two float variables on this line
	int choice;		//We are declaring an int variable on this line 

	printf("\n1: Convert temperature from Fahrenheit to Celsius."); //We use printf here, we can use printf because we've included the definition
	printf("\n2: Convert temperature from Celsius to Fahrenheit.");	//We use backslash n to start a new line, equivalent to the enter key on Microsoft word
	printf("\nEnter your choice (1,2):"); 
	scanf("%d", &choice);											//With %d, you're qualifying the input
																	//You're stating that scan f should expect to store a decimal integer
	if(choice == 1){
		printf("\n Enter temperature in Fahrenheit: ");				//You can make a "menu" in your program with if statements
		scanf("%f", &fh);							
		cl= (fh-32)/1.8;											
		printf("\nTemperature in Celsius: %.2f", cl);
		
	} else if (choice ==2){											//If you want to check equality use double equal sign 
		printf("\nEnter temperature in Celsius: ");
		scanf("%f", &cl);
		fh = (cl*1.8)+32;
		printf("Temperature in Fahrenheit: %.2f", fh);
	} else{
		printf("\nInvalid Choice");
	}

	return 0;
}