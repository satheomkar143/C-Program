#include<stdio.h>
main()
{
	int a, b, c;
	printf("\nEnter 1st and 2nd point: ");
	scanf("%d%d",&a,&b);
	
	c = b - a;
	printf("\ndistance between %d and %d is %d",a,b,c);
}
