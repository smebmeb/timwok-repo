#include <stdio.h>
#include <conio.h>

main (void)
{
	float radius;
	const float PI = 3.1416; 
	float area, circumference;
	
	printf("Enter the radius of a circle: ");
	scanf("%f", &radius);
	printf ("\n");
	
	area = 	PI * radius * radius;
	circumference = 2 * PI * radius;
	
	printf("Area: %f \n", area);
	printf("Circumference: %f", circumference);
	
	getch();
}
