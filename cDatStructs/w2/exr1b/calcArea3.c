/* Exercise 1b
 * 	Rewrite the program from Exercise 1a to use a 
 *  function to display a greeting.
 */
#include <stdio.h>
#include <math.h>
#define PI 3.141592

float calcArea( float radius );
void greeting();

int main(){

	float area, radius;

	greeting();
 	scanf("%f", &radius);

	area= calcArea( radius );
	
 	printf( "A circle with the radius of \'%f\'\nwill have an area of: %.3f\n",
 		radius, area );

 	return 0;
}

/** calcArea
* Returns the area of a circle given the radius.
*/
float calcArea( float radius ){
	return PI* pow(radius, 2);	
}

/** greeting
* simply prints a prompt to the user to 
* enter a value for the radius.
*/
void greeting(){
 	printf( "Enter the radius of the circle > ");
}