#include<stdio.h>
main()
{
	int s1, s2, s3, s4, s5, per, sum;
	printf("\n Enter 5 subjects marks: ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	
	sum = s1+s2+s3+s4+s5;
	per = sum *100/500;
	
	if(per >= 75 && per <= 100)
	{
		printf("Distinction");
	}
	if(per >= 60 && per < 75)
	{
		printf("1st class");
	}
	if(per >= 50 && per < 60)
	{
		printf("2nd class");
	}
	if(per >= 40 && per < 50)
	{
		printf("Pass");
	}
	else	
	{
		printf("Fail");
	}
}
