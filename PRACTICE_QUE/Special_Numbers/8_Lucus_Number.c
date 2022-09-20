/* Lucas numbers are similar to Fibonacci numbers. 
Lucas numbers are also defined as the sum of its two immediately previous terms.
But here the first two terms are 2 and 1 whereas in Fibonacci numbers the first two terms are 0 and 1 respectively. 
*/

#include<stdio.h>
void lucus(int);
main()
{
	int n;
	printf("Enter no of terms: ");
	scanf("%d",&n);
	
	lucus(n);
}

void lucus(int n)
{
	int a=2, b=1, c, i;
	printf("\nlucus series:\n");
	printf("%d\t%d",a,b);
	for(i=0;i<n-2;i++)
	{
		c = a + b;
		a = b; 
		b = c;
		printf("\t%d",c);
	}
	printf("\nlucus number at term %d is %d.",n,c);
}


	
	
	
