#include <stdio.h>
#include <conio.h>

main (void)
{
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("\n");
	
	if (num % 9 == 0) {
		printf("DIVISIBLE BY 9");
	}
	
	else {
		printf("NONE DIVISIBLE");
	} 
	
	getch();
}
