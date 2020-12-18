#include <stdio.h>
#include <conio.h>
#include <math.h>

main (void)
{
	float sideA, sideB, hypotenuse_C = 0;
	
	printf("Enter the sides of the right triangle...\n\n");
	printf("Side A: ");
	scanf("%f", &sideA); 
	printf("Side B: ");
	scanf("%f", &sideB); 
	
	hypotenuse_C = sqrt((sideA*sideA) + (sideB * sideB));
	
	printf("Hypotenuse: %f", hypotenuse_C);
	
	getch();
}
