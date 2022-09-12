#include<stdio.h>
main()
{
	int p,c,m,total;
	printf("\nenter physics marks= ");
	scanf("%d",&p);
	printf("\nenter chemistry marks= ");
	scanf("%d",&c);
	printf("\nenter maths marks= ");
	scanf("%d",&m);
	
	total = p + c + m;
	printf("total marks in the subjects = %d",total);
	
	if(total>=180)
	{
		if(m>=65 && p>=55 && c>=50)
		{
			printf("\nstudent is eligible for the professional course");
		}
		else
		{
			printf("\nnot eligible for professional course");
		}
	}
	else
	{
		printf("\nnot eligible for professional course");
	}
}
