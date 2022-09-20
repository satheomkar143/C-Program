/* A number is called a duck number if the number contains at least one zero, but the number should not start with 0 
 42056 120 400
 */

#include<stdio.h>
void duck(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	duck(n);
}
void duck(int n)
{
	int i, rem, temp=n, cnt=0;
	while(n != 0)
	{
		rem = n%10;
		if(rem == 0)
		{
			printf("\n%d is a Duck number.",temp);
			cnt = 1;
			break;
		}
		n /= 10;
	}
	if(cnt == 0)
		printf("\n%d is not Duck number.",temp);
}
