#include <stdio.h>

void swap(float *ptr1, float *ptr2);

int main (){

	float m, n;

	printf("Enter the values M and N:\n");
	scanf("%f %f", &m, &n);
	printf("Before swapping: M=%5.2f \tN= %5.2f \n", m ,n );
	swap(&m, &n);
	printf("After swapping: M=%5.2f \tN= %5.2f\n", m,n);

	return 0;
}

void swap(float *ptr1, float *ptr2){

	float temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp; 
}