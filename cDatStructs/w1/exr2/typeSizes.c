/* Exercise 4
 *	Write a program that display the size of every data type. 
 *	Print it in a table format.
 */
 #include <stdio.h>

 int main(){

 	// Initialize variables
 	char c;
 	unsigned char uc;
 	signed char sc;
 	int i;
 	unsigned int ui;
 	signed int si;
 	short int shi;
 	signed short int sshi;
 	unsigned short int ushi;
 	long int li;
 	unsigned long int uli;
 	signed long int sli;
 	float f;
 	double d;
 	long double ld;

 	// Print sizes
 	printf( "\n| Type\t\t\t| Size |\n--------------------------------\n");
 	printf( "| char\t\t\t|   %lu  |\n", sizeof(c));
 	printf( "| unsigned char\t\t|   %lu  |\n", sizeof(uc));
 	printf( "| signed char\t\t|   %lu  |\n", sizeof(sc));
 	printf( "| int\t\t\t|   %lu  |\n", sizeof(i));
 	printf( "| unsigned int\t\t|   %lu  |\n", sizeof(ui));
 	printf( "| signed int\t\t|   %lu  |\n", sizeof(si));
 	printf( "| short int\t\t|   %lu  |\n", sizeof(shi));
 	printf( "| signed short int\t|   %lu  |\n", sizeof(sshi));
 	printf( "| unsigned short int\t|   %lu  |\n", sizeof(ushi));
 	printf( "| long int\t\t|   %lu  |\n", sizeof(li));
 	printf( "| unsigned long int\t|   %lu  |\n", sizeof(uli));
 	printf( "| signed long int\t|   %lu  |\n", sizeof(sli));
 	printf( "| float\t\t\t|   %lu  |\n", sizeof(f));
 	printf( "| double\t\t|   %lu  |\n", sizeof(d));
 	printf( "| long double\t\t|   %lu |\n\n", sizeof(ld));

 }
