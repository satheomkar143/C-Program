// Strong numbers are the numbers whose sum of factorials of digits is equal to the original number.
// 1! + 4! + 5! = 1 + 24 + 120 = 145.

#include<stdio.h>
void strong(int);
main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	strong(n);
}
void strong(int n)
{
	int i, sum=0, fact, rem, temp=n;
	while(n != 0)
	{
		fact = 1;
		rem = n % 10;
		for(i=2; i<=rem; i++)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		n /= 10;
	}
	if(temp == sum)
		printf("\n%d is a strong number.",temp);
	else
		printf("\n%d is not strong number.",temp);
}
