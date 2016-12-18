#include <stdio.h> 
// sizeof is not in studio.h, it's not even a function
// sizeof is an operator that can be used to get the size of classes,
// structures, unions, and any other user defined data type

int main(void){

	char a 		= 'A';	//When you declare&initialize a char, you must use single quotes
	int b 		=120;	//Notice how the white space doesn't matter. The progam will run the same
	float c 	=123.0f;//This is how you would declare a float
	double d 	=1222.90;
	char str[]	="Hello";//Notice how char strings neeed double quotes 

	printf("\nSize of a: %lu", sizeof(a));	//You can use functions within functions
	printf("\nSize of b: %lu", sizeof(b));	//As seen here, we used sizeof function 
	printf("\nSize of c: %lu", sizeof(c));	//Within printf function 
	printf("\nSize of d: %lu", sizeof(d));
	printf("\nSize of str: %lu", sizeof(str)); //sizeof will return char string + null terminator

	return 0;
}