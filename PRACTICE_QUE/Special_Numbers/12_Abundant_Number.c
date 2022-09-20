/* an abundant number or excessive number is a number for which the sum of its proper divisors is greater than the number. 
The integer 12 is the first abundant number. 
Its proper divisors are 1, 2, 3, 4 and 6 for a total of 16. 
The amount by which the sum exceeds the number is the abundance. ie.4
*/

#include<stdio.h>
void Abundant(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	Abundant(n);
}
void Abundant(int n)
{
	int i, sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum += i;
	}
	if(n<sum)
		printf("\n%d is a Abundant number.",n);
	else
		printf("\n%d is not Abundant number.",n);
}
