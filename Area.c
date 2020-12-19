#include <stdio.h>
#include <conio.h>

main (void)
{
	char choice;
	int base, height;
	float area = 0;
	
	printf("Select which figure's area to compute...\n");
	printf("[R] Rectangle \n");
	printf("[T] Triangle \n\n");
	printf("Enter choice: ");
	scanf("%c", &choice);
	printf("\n");
	
	if (choice == 'R') {
		printf("Base: ");
		scanf("%d", &base);
		
		printf("Height: ");
		scanf("%d", &height);
		
		area = base * height;
		
		printf("Area: %f", area);	
	}
	
	else {
		printf("Base: ");
		scanf("%d", &base);
		
		printf("Height: ");
		scanf("%d", &height);
		
		area = 0.5 * base * height;
		
		printf("Area: %f", area);
	}
	
	getch();
}
