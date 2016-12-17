#include <stdio.h>

int main(void){
	float amount, rate, time, si;			//Declaring 4 values, all at once

	printf("Enter principle (Amount) :");	//Printing to stdout 
	scanf("%f", &amount);					//Scanning user input
											//%f is a flag. It declares the input format
											//&amount is the address of the variable amount. 	
											//We are stating we want to store the float in the address where amount is located

	printf("Enter rate :");
	scanf("%f", &rate);

	printf("Enter time (in years) :");
	scanf("%f", &time);

	si = (amount*rate*time)/100;

	printf("\n Simple Interest is = %f", si);

	return 0;
}