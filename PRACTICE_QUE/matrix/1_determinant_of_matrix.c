#include<stdio.h>
main()
{
	int a[3][3], i, j, d;
	printf("\nEnter 3x3 matrix element\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	d = a[0][0] * ((a[1][1] * a[2][2]) - (a[1][2] * a[2][1])) -
		a[0][1] * ((a[1][0] * a[2][2]) - (a[1][2] * a[2][0])) +
		a[0][2] * ((a[1][0] * a[2][1]) - (a[1][1] * a[2][0]));
		
	printf("\nDeterminant of matrix : %d",d);
}
