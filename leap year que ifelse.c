#include<stdio.h>
#include<string.h>
main()
{
	int n;
	char month[10];
	printf("How many days in a leap year?\n");
	scanf("%d",&n);
	
	if(n == 366)
	{
		printf("You have cleared the first level.\n");
		printf("\nWhat month has an extra day in leap year?");
		scanf("%s",&month);
		
		if(!strcmp(month,"february"))
		{
			printf("Congratulations !! You have cleared the test.");
		}
		else
		{
			printf("You have failed the test.");
		}
		
	}
	else
	{
		printf("\nYour input is wrong, please try again.");
	}
}
