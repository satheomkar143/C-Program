#include<stdio.h>
void cube();
void fact();
main()
{
	cube();
	fact();
}

void cube()
{
	int a, area;
	printf("\nenter side of cube:  ");
	scanf("%d",&a);
	area = 6*a*a;
	printf("\narea = %d",area);
}

void fact()
{
	int n, f=1;
	printf("\nenter number: ");
	scanf("%d",&n);
	while(n>0)
	{
		f = f * n;
		n--;
	}
	
}
