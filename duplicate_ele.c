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
	for(i=0;i<=4;i++)
	{
		count=1;
		if(a[i] != a[i-1])
		{
			for(j=i+1;j<=4;j++)
				{
					if(a[i]==a[j])
						{
							count++;
						}
				}	
				printf("%d is present %d times.\n",a[i],count);	
			
		} 
	
	}

}

