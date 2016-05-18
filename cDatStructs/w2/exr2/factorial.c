/* Exercise 2
* 	Write a function to calculate the 
*   factorial of a positive number ( num >= 0 ).
*/
#include <stdio.h>

long int factorial( int n );

int main(){
	int answer, userInt;

	printf("Enter an integer to factorize >");
	scanf( "%d", &userInt);

	answer= factorial( userInt );

	printf( "%d! = %d\n", userInt, answer);

	return 0;
}

/** factorial 
* Recursively calculates the factorial of a given number. 
*/
long int factorial( int n ){
	if( n == 0 ) // Base case
		return 1;

	if( n != 1 ){
		return n* factorial( n- 1 );
	}else // Stopping cond.
		return 1;
}

/****TESTING****

$ for i in {1..9}; do ./factorial.bin <<< $i; done;

1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880

! program prompt has been omitted

*/