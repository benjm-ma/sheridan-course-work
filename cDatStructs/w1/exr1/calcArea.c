/* Exercise 3
 * 	Write a program that will calculate the
 * 	area of a circle. Radius of the circle
 *	should be entered by user from the keyboard.
 *	In your final result, you have to keep 3 
 *	digits after the decimal point.	
 */
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(){

 	float radius;

 	printf( "Enter the area of the circle > ");
 	scanf( "%f", &radius );

 	printf( "A circle with the radius of \'%f\'\nwill have an area of: %.3f\n",
 		radius, PI* pow(radius, 2) );

 	return 0;
 }