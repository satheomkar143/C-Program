#include<stdio.h>
main()
{
	int year;
	printf("\n Enter year ");
	scanf("%d",&year);
	
	if(year % 4 == 0)
	{
		printf("\n%d is a leap year.",year);
	}
	else
	{
		printf("\n%d is a non leap year.",year);
	}
}
