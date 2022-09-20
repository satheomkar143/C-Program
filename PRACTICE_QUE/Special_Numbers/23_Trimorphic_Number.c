/*  A number is called Trimorphic number if and only if its cube ends in the same digits as the number itself. 
24^3 = 13824. The cube is ending with 24.
*/
#include<stdio.h>
#include<math.h>
void Trimorphic(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	Trimorphic(n);
}
void Trimorphic(int n)
{
	int i, p, cub, len=0, temp=n;
	while(n != 0)
	{
		len++;
		n /= 10;
	}
	cub = temp * temp * temp;
	p = pow(10,len);
	cub = cub % p;
	if(temp == cub)
		printf("\n%d is a Trimorphic Number.",temp);
	else
		printf("\n%d is not Trimorphic Number.",temp);
}
