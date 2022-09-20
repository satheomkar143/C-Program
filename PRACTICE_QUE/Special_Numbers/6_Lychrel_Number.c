/* Lychrel Number is a natural number that cannot form a palindrome through the iterative process of 
repeatedly reversing its digits and adding the resulting numbers.

56 is not lychrel 
Explanation : 56 becomes palindromic after one iteration : 
56 + 65 = 121

196 is lychrel 
Explanation : 196 becomes palindromic after 19 iterations :
196 + 691 = 887
887 + 788 = 1675
1675 + 5761 = 7436
7436 + 6347 = 13783
13783 + 38731 = 52514
....
 */

#include<stdio.h>
#include<math.h>
void Lychrel(long int);
int reverse(long int);
int palindrome(long int);
main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	Lychrel(n);
}
void Lychrel(long int n)
{
	int i, count=1, temp=n;
	
	for(i=1;i<=20;i++)
	{
		n = n + reverse(n);
		if(palindrome(n))
		{
			printf("\n%d is not Lychrel number.",temp);
			count=0;
			break;
		}	
	}	
	if(count == 1)
		printf("\n%d is Lychrel number.",temp);
}

int reverse(long int n)
{
	int i, rem, rev=0;
	while(n != 0)
	{
		rem = n%10;
		rev = rev *10 + rem;
		n /= 10;
	}
	return rev;
}

int palindrome(long int n)
{
	if(n == reverse(n)) 
		return 1;
	else
		return 0;
}

