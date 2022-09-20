// A number is said to be a Harshad number or Niven number if it is divisible by the sum of its digits.
// 21 = 21/(2+1) ->7

#include<stdio.h>
void harshad(int);
main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	harshad(n);
}
void harshad(int n)
{
	int i, rem, sum=0, temp=n;
	
	while(n != 0)
	{
		rem = n%10;
		sum = sum + rem;
		n /= 10;
	}
	if(temp % sum == 0)
		printf("\n%d is a harshad number.",temp);
	else
		printf("\n%d is not harshad number.",temp);
}
