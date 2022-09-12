#include<stdio.h>
main()
{
	int a[3][3],i,j,k,lsum,usum;
	printf("enter matrix a\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	// for sum of upper tringular matrix
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i<j)
			{
				a[i][j] = 0;
			}
			/*if(i>j)
			{
				lsum=lsum+a[i][j];
			}*/
		}
	}
			printf("\n sum of upper tringular matrix =%d \n",usum);
			printf("\n sum of lower tringular matrix =%d \n",lsum);
			
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
