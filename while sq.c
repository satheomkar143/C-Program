#include<stdio.h>
#include<math.h>
main()
{
	int i = 1;
	float sq;
		
	while(i <= 10)
	{
		sq = i*i;
		printf("sqrt of %d = %.2f\n",i,sq);
		i++;
	}
	
}
