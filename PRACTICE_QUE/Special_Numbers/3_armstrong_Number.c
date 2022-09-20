// Perfect numbers are the positive integers which are the sum of their digit cube
// 153 = 1^3 + 5^3 + 3^3

#include<stdio.h>
void armstrong(int);
main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	armstrong(n);
}
void armstrong(int n)
{
	int i, rem, sum=0, temp=n;
	
	while(n != 0)
	{
		rem = n%10;
		sum = sum + rem * rem * rem;
		n /= 10;
	}
	if(temp == sum)
		printf("\n%d is a armstrong number.",temp);
	else
		printf("\n%d is not armstrong number.",temp);
}
