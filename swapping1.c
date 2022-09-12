#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter value of a & b ");
	scanf("%d%d",&a,&b);
	
	printf("\nbefore swapping a= %d & b= %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping a= %d & b= %d",a,b);
}
