#include<stdio.h>
main()
{
	int a[5], i, j, temp,count;
	printf("Enter 5 number\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
		}		
	}
	printf("minimum number in array: %d\n",a[0]);
	printf("maximum number in array: %d\n",a[4]);
	

}

