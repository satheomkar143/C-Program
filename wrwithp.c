#include<stdio.h>
// without return type with parameter
void add(int,int);
main()
{
	int a, b;
	printf("\nenter a & b:  ");
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int a, int b)
{
	int c = a+b;
	printf("\n add = %d",c);
}
