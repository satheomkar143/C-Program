/* A number is said to be a Spy number if the sum of all the digits is equal to the product of all digits. 
1412 : 
sum = (1 + 4 + 1 + 2) = 8
product = (1 * 4 * 1 * 2) = 8
*/
#include<stdio.h>
void Spy(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	Spy(n);
}
void Spy(int n)
{
	int rem, sum=0, prod=1, temp=n;
	while(n != 0)
	{
		rem = n % 10;
		sum += rem;
		prod *= rem;
		n /= 10;
	}
	if(prod == sum)
		printf("\n%d is a Spy number.",temp);
	else
		printf("\n%d is not Spy number.",temp);
}
