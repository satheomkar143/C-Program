#include<stdio.h>
main()
{
	int a[5];
	int i, pos=0, neg=0, z=0;
	printf("Enter 5 number\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<=4;i++)
	{
		if(a[i]>0)
		{
			pos++;
		}
		else if(a[i]<0)
		{
			neg++;
		}
		else //if(a[i]==0)
		{
			z++;
		}
	}
	
	printf("positive elements = %d\n",pos);
	printf("nigative elements = %d\n",neg);
	printf("zero elements = %d\n",z);
	
}
