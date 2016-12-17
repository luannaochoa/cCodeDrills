#include <stdio.h> 						//We use this library because
										//We're using functions like 	
										//printf and scanf
										//These functions are not user defined
										//These function definitions are found in stdio.h


int main(void){							//"All" programs require a main function 
										//We specifiy the output of the program with int
										//We specifiy the parameters the function takes with void
	int a,b,c;							//We declare three int variables in one line
	int largest;						//We can also declare only one variable per line

	printf("Enter three numbers (seperated by space):");
	scanf("%d%d%d", &a, &b, &c);

	if(a>b && a>c){						//&& is a logical AND operator, the statement inside will only run if all conditions are true
		largest=a;
		//printf("Largest is a");		//You can uncomment this line and run this for same effect
	} else if (b>a && b>c){
		largest=b;
	} else {
		largest=c;
	}

	printf("Largest number is = %d\n", largest);

	return 0;
}
