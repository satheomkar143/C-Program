/* A number is called an automorphic number if and only if the square of the given number ends with the same number itself.
 For example, 25, 76 are automorphic numbers because their square is 625 and 5776,
  respectively and the last two digits of the square represent the number itself. 
Some other automorphic numbers are 5, 6, 36, 890625, etc.
*/

#include<stdio.h>
#include<math.h>
void automorphic(int);
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	automorphic(n);
}
void automorphic(int n)
{
	int i, len=0, sq, n1, p, temp=n;
	sq = n * n;
	while(n != 0)
	{
		len++;
		n /= 10;
	}
	p = pow(10,len);
	n1 = sq % p; 
	 
	if(n1 == temp)
		printf("\n%d is a automorphic number.",temp);
	else
		printf("\n%d is not automorphic number.",temp);
}
