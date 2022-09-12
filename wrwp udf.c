#include<stdio.h>
// without return type without parameter
void add();
int a, b, c;  // global variale
main()
{
	add();
	sub();
}
void add()
{
	printf("\nenter a and b:  ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\nadd=%d",c);
}
void sub()
{
	printf("\nenter a and b:  ");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("\nsub=%d",c);
}
