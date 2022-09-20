/* A Narcissistic decimal number is a non-negative integer,
 n that is equal to the sum of the m-th powers of each of the digits in the decimal representation of n, 
 where m is the number of digits in the decimal representation of n.
 
 370 = 27 + 343 +0 =370
*/
#include<stdio.h>
#include<math.h>
void narc(int);
main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	narc(n);
}
void narc(int n)
{
	int i, rem, len=0, sum=0, temp=n;
	while(n != 0)
	{
		len++;
		n /= 10;
	}
	n=temp;	
	while(n != 0)
	{
		rem = n%10;
		sum = sum + pow(rem,len);
		n /= 10;
	}
	if(temp == sum)
		printf("\n%d is a Narcissistic Decimal Number.",temp);
	else
		printf("\n%d is not Narcissistic Decimal Number.",temp);
}
