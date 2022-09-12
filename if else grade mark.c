#include<stdio.h>
main()
{
	int p, c, b, m, cs, sum;
	float per;
	
	printf("\nenter the marks in physics = ");
	scanf("%d",&p);
	printf("\nenter the marks in chemistry = ");
	scanf("%d",&c);
	printf("\nenter the marks in biology = ");
	scanf("%d",&b);
	printf("\nenter the marks in maths = ");
	scanf("%d",&m);
	printf("\nenter the marks in computer = ");
	scanf("%d",&cs);
	
	sum=p+c+b+m+cs;
	per=sum*100/500;
	printf("\n percentage = %.2f",per);
	
	if(per>=90 && per<=100)
	{
		printf("\nGrade A");
	}
	else if(per>=80 && per<90)
	{
		printf("\nGrade B");
	}
	else if(per>=70 && per<80)
	{
		printf("\nGrade C");
	}
	else if(per>=60 && per<70)
	{
		printf("\nGrade D");
	}
	else if(per>=40 && per<60)
	{
		printf("\nGrade E");
	}
	else
	{
		printf("\nGrade F");
	}
}
