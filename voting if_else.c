#include<stdio.h>
main()
{
	int age;
	printf("Enter age = ");
	scanf("%d",&age);
	
	if(age >= 18)
	{
		printf("voter is eligible for voting.");
	}
	else
	{
		printf("voter is not eligible for voting.");
	}
}
