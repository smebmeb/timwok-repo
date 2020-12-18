#include <stdio.h>
#include <conio.h>

main (void)
{
	int r_code, height = 0, age = 0, c_code;
	
	printf("Select your recommendee code. \n");
	printf("[0] Not recommended by Jedi Master \n");
	printf("[1] Recommended by Jedi Master \n\n");
	printf("Enter recommendee code: ");
	scanf("%d", &r_code);
	printf("\n");
	
	if (r_code == 0) {
		printf("Height (cm): ");
		scanf("%d", &height);
		
		printf("Age: ");
		scanf("%d", &age);
		
		printf("Citizenship code (0-Not citizen, 1-Citizen): ");
		scanf("%d", &c_code);
		printf("\n");
		
			if (height >= 200) {
				if (age >= 21 && age <=25) {
				} 
					if (c_code == 1) {
					printf("ACCEPTED");
				}
			}

			else {
			printf("REJECTED");
			}
	}
		
	else if (r_code == 1) {
		printf("ACCEPTED");
	
	}
	
	getch();
}
