#include <stdio.h>

int main (){
	int ival, remainder;

	printf("Enter and Integer : \n");

	scanf("%d", &ival);
	remainder = ival%2;
	if (remainder == 0){
		printf("%d is an even number.\n", ival);
	}
	else {
		printf("%d is an odd number\n", ival);
	}

	return 0;
}