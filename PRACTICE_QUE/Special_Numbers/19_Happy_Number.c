/* a happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
13 is a happy number because 1^{2}+3^{2}=10 and  1^{2}+0^{2}=1
*/
#include<stdio.h>
void happy(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	happy(n);
}
void happy(int n)
{
	int i=0, sum=0, rem, cnt=0, temp = n;
	
	while(i<50)
	{
		sum=0;
		while(n != 0)
		{
			rem = n%10;
			sum = sum + rem * rem;
			n /=10;
		}
		n = sum;
		if(sum == 1)
		{
			printf("%d is a happy number.",temp);
			cnt = 1;
			break;
		}
		i++;			
	}
	if(cnt == 0)
		printf("%d is not happy (sad) number.",temp);
	
	
}
