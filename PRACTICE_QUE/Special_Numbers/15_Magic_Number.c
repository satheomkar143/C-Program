/* if the sum of its digits recursively is calculated till a single digit. 
If the single digit is 1 then the number is called a magic number. It is quite similar to the happy number.

For example, 325 is a magic number because the sum of its digits (3+2+5) is 10, 
and again sum up the resultant (1+0), we get a single digit (1) as the result. Hence, the number 325 is a magic number.

Some other magic numbers are 1234, 226, 10, 1, 37, 46, 55, 73, etc.
*/
#include<stdio.h>
void magic(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	magic(n);
}
void magic(int n)
{
	int sum, rem, temp=n;
	while(n>9)
	{
		sum=0;
		while(n != 0)
		{
			rem = n % 10;
			sum += rem;
			n /= 10;
		}
		n = sum;
	}
	if(n == 1)
		printf("\n%d is a magic number.",temp);
	else
		printf("\n%d is not magic number.",temp);
}
