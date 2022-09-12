#include<stdio.h>
main()
{
	int i,j,a[6],x,value;
	printf("enter 6 elements\n");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	
	printf("\nenter the position=");
	scanf("%d",&x);
	
	printf("\nenter the value=");
	scanf("%d",&value);
	
	for(i=a[i-1];i>=x+1;i--)
	{
		a[i+1]=a[i+1];
		a[x-1]=value;
	}
		printf("\narray is\n");
		
		for(i=0;i<=5;i++)
		{
			printf("%d\n",a[i]);
		}
}
