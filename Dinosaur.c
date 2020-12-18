#include <stdio.h>
#include <conio.h>

main (void)
{
	char dinoName;
	int yearsAgo, months, days, seconds = 0;	
	
	printf("Enter dinosaur's name: ");
	scanf("%s", &dinoName);
	
	printf("Enter years lived: ");
	scanf("%d", &yearsAgo);
	
	months = yearsAgo * 12; // 12 months = 1yr
	days = yearsAgo * 365.25; // 365.25 days = 1yr
	seconds = yearsAgo * 31557600.0; // 1 year = 365.25 days * 24hrs * 60mins * 60secs
	
	printf("\n");
	printf("Months: %d \n", months); 
	printf("Days: %d \n", days); 
	printf("Seconds: %2.2e", seconds);
	
	getch();
}
