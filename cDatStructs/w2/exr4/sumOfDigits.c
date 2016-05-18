/* Exercise 4
* Using a function, write a program to enter
* a number and then calculate the sum of its
* digits.
*/
#include <stdio.h>

int sumOfDigits( int num );

int main(){
	int num;

	printf("Enter a number> ");
	scanf("%d", &num);

	printf("The sum of the digits of %d is %d\n",
		num, sumOfDigits( num ) );

	return 0;
}

/* sumOfDigits
* A recursive function which calculates the 
* sum of all digits.
*/
int sumOfDigits( int num ){
	// Base Case
	if( num == 1 )
		return 1;

	if( num > 0 ){
		return num% 10+ sumOfDigits( num/ 10 );
	//Stopping cond.
	}else 
		return 0;
}

/****TESTING****

$ for c in {1..5}; do ./sumOfDigits.bin <<< $RANDOM; done;

The sum of the digits of 4240 is 10
The sum of the digits of 5589 is 27
The sum of the digits of 22647 is 21
The sum of the digits of 6938 is 26
The sum of the digits of 23997 is 30

! program prompt has been omitted

*/