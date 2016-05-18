/* Exercise 1a
 * 	Rewrite the program from week1 to calculate the area of a circle using a 
 *  function.
 */
#include <stdio.h>
#include <math.h>
#define PI 3.141592

// Declare function
float calcArea( float radius );

int main(){

	float area, radius;

 	printf( "Enter the radius of the circle > ");
 	scanf("%f", &radius);

	area= calcArea( radius );

 	printf( "A circle with the radius of \'%f\'\nwill have an area of: %.3f\n",
 		radius, area );

 	return 0;
}

// Define function
float calcArea( float radius ){
	return PI* pow(radius, 2);	
}