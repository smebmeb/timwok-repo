#include <stdio.h>
#include <conio.h>

main (void)
{
	int p_index = 0;
	
	printf("Enter pollution index: ");
	scanf("%d", &p_index);
	printf("\n");
	
	if (p_index <= 35) {
		printf("PLEASANT");
	}
	
		else if (p_index >= 35 && p_index <=60) {
		printf("UNPLEASANT");
		}
		
	else {
		printf("HAZARDOUS");
	}
	
	getch();
}
