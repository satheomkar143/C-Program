/* A number is called a sunny number if the number next to the given number is a perfect square.
 In other words, a number N will be a sunny number if N+1 is a perfect square. 
 N=80 then N+1 will be 80+1=81, which is a perfect square of the number 9. Hence 80 is a sunny number
 */
 
#include<stdio.h>
void sunny(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	sunny(n);
}
void sunny(int n)
{
	int i, cnt=0, n1;
	n1 = n+1;
	for(i=1;i<=n1/2;i++)
	{
		if(n1%i == 0 && n1 == i*i)
		{
			printf("\n%d is a sunny number.",n);
			cnt = 1;
			break;
		}
	}
	if(cnt == 0)
		printf("\n%d is not sunny number.",n);
}
