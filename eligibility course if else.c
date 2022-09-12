#include<stdio.h>
main()
{
	int m, p, c, total;
	printf("\nenter the marks in maths");
	scanf("%d",&m);
	printf("\nenter the marks in physics");
	scanf("%d",&p);
	printf("\nenter the marks in chemistry");
	scanf("%d",&c);
	
	total=m+p+c;
	printf("total marks = %d\n",total);
	if(total>=180)
	{
		if(m>=65 && p>=55 && c>=50)
		{

			printf("candidate is eligible for professional course");
		}
		else
		{
			printf("candidate is not eligible for professional course");
		}
	}
	else
	{
		printf("candidate is not eligible for professional course");
	}
}
