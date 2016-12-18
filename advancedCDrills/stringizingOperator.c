#include <stdio.h>
//# is one of three preprocessor operators 
//the other 2 operators are the token pasting operator ### and the define operator
//the behavior is the same for both C and C++ compilers 

#define getVariableName(x) #x

int main(void){

	int student_age=21;
	printf("Value of %s is = %d\n", getVariableName(student_age), student_age );
	
	return 0;
}