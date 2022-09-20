/* A disarium number is a number in which the sum of the digits to the power of their respective position
 is equal to the number itself (position is counted from left to right starting from 1). 
Example of a Disarium number is 175, 1¹ + 7² + 5³ = 1 + 49 + 125= 175 Hence,175 is a disarium number. 
*/
#include<stdio.h>
#include<math.h>
void disarium(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	disarium(n);
}
void disarium(int n)
{
	int temp=n, i, rem, sum=0, len=0;
	while(n != 0)
	{
		len++;
		n /= 10;
	}
	n=temp;
	while(n != 0)
	{
		rem = n % 10;
		sum = sum + pow(rem,len);
		n /= 10;
		len--;
	}
	if(sum == temp)
		printf("\n%d is a Disarium Number.",temp);
	else
		printf("\n%d is not Disarium Number.",temp);
	
}
