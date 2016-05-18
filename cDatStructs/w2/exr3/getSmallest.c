/* Exercise 3
*	Write a program to return a smallest of three integers
*	using a function.
*/
#include <stdio.h>

int getSmallest( int a, int b, int c );

int main(){
	int intA, intB, intC;

	printf("enter three integers to compare> ");
	scanf( "%d %d %d", &intA, &intB, &intC );

	printf("of %d, %d, and %d, %d is the smallest.\n",
		intA, intB, intC, 
		getSmallest( intA, intB, intC )
	);

	return 0;
}


/* getSmallest
* Simply returns the smallest number of 3.
*/
int getSmallest( int a, int b, int c ){
	if( a < b && a < c )	
		return a;
	if( b < a && b < c)
		return c;
	return c;
}


/****TESTING****

for i in {1..5}; do ./getSmallest.bin <<< "$RANDOM $RANDOM $RANDOM"; done;

of 24351, 22835, and 3475, 3475 is the smallest.
of 8641, 22961, and 31642, 8641 is the smallest.
of 25700, 23087, and 27040, 27040 is the smallest.
of 9991, 23213, and 22439, 9991 is the smallest.
of 27049, 23338, and 17837, 17837 is the smallest.

! program prompt has been omitted

*/