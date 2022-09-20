/* An evil number is a non-negative number that has an even number of 1s in its binary expansion.
Odious Numbers: Numbers that are not Evil are called Odious Numbers. 
Binary expansion of 23 is 10111, the number of 1s in this is 4 i.e even.
*/
#include<stdio.h>
void evil(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	evil(n);
}
void evil(int n)
{
	int bin;
	bin = binary(n);
	if(bin%2 == 0)
		printf("\n%d is a evil Number.",n);
	else
		printf("\n%d is not evil Number.",n);	
}

int binary(int n)
{
	int i=1, rem, cnt=0, bin=0, temp=n;
	while(n!=0)
	{
		rem = n%2;
		bin = bin + rem * i;
		i = i * 10;
		n = n / 2;
	}
	printf("\nbinary number of %d is %d",temp,bin);
	
	while(bin!=0)
	{
		rem = bin%10;
		if(rem == 1)
			cnt++;
		bin = bin / 10;
	}
	return cnt;
}
