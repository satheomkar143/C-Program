#include<stdio.h>
main()
{
	int a,b;
	printf("enter value of a & b ");
	scanf("%d%d",&a,&b);
	
	printf("\nbefore swapping a= %d & b= %d",a,b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\nafter swapping a= %d & b= %d",a,b);
}
