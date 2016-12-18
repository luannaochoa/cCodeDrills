#include <stdio.h> //printf and scanf function definition
#include <math.h> //pow function definition

int main(void){

	int x,n, result;	//These are variables
						//These variables are being declared here, we are stating their data type
						//This can be done in one line, or it can be done on seperate lines


	printf("Enter the value of base: ");
	scanf("%d", &x);

	printf("Enter the value of power: ");
	scanf("%d", &n);

	result = pow((double)x,n);		//We are using the pow function	
									//Definition is located in math.h
									//This function takes 2 arguments that are comma seperated
									//These arguments must have the data type of double
									//However, our two variables x and n are ints so we need to cast them as doubles
									//We achieve this by using (double)
	printf("%d to the power of %d is = %d", x,n,result);
	

	return 0;
}