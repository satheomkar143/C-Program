/* A Kaprekar number is a number whose square when divided into two parts and such that 
sum of parts is equal to the original number and none of the parts has value 0.
 45 = 2025 20+25=45
 */

#include<stdio.h>
#include<math.h>
void kaprekar(int);
main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	kaprekar(n);
}
void kaprekar(int n)
{
	int i, rem, sum=0, p, count=0, len=0, sq=n*n;
	
	while(sq != 0)
	{
		len++;
		sq /= 10;
	}
	sq=n*n;
	for(i=1;i<=len;i++)
	{
		p = pow(10,i);
		if(n == p)
		{
			printf("\n%d is not kaprekar number.",n);
			count =1;
			break;
		}
		sum = sq%p + sq/p;
		if(n == sum)
		{
			printf("\n%d is a kaprekar number.",n);
			count = 1;
			break;
		}	
	}
	
	if(count == 0)
		printf("\n%d is not kaprekar number.",n);
}
