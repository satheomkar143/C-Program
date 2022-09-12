#include<stdio.h>
int add();
main()
{
	int ans1;
	ans1=add();
	printf("\nadd=%d",ans1);
	printf("\nadd=%d",add());
}
int add()
{
	int a,b,c;
	printf("\nenter a and b");
	scanf("%d%d",&a,&b);
	c = a + b;
	return c;
}
