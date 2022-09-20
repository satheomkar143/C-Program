/*  Pronic number is a number which is the product of two consecutive integers,
 that is, a number n is a product of x and (x+1). 
 6 2*3=6 ie 6 is  Pronic Number 
 */
#include<stdio.h>
void Pronic(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	Pronic(n);
}
void Pronic(int n)
{
	int i, cnt=0;
	for(i=1; i<=n/2; i++)
	{
		if(n%i == 0 && n == i * (i+1))
		{
			printf("\n%d is a Pronic Number.",n);
			cnt=1;
			break;
		}
	}
	if(cnt == 0)
		printf("\n%d is not Pronic Number.",n);
}
