#include<stdio.h>
void cube(int);
void fact(int);
main()
{
	int a,n;
	
	printf("\nenter side of cube:  ");
	scanf("%d",&a);
	
	printf("\nenter number: ");
	scanf("%d",&n);
	
	cube(a);
	fact(n);
}

void cube(int a)
{
	int area;
	
	area = 6*a*a;
	printf("\narea = %d",area);
}

void fact(int n)
{
	int f=1;
	
	while(n>0)
	{
		f = f * n;
		n--;
	}
	printf("fact = %d",f);
}
