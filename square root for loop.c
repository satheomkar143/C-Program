#include<stdio.h>
#include<math.h>
main()
{
	int i;
	float sq;
	
	for(i=1; i<=10; i++)
	
	{
		sq=sqrt(i);
		
		printf("\n square root of %d= %.2f",i,sq);
	}
}
