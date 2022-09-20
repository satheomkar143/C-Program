/*   A =  sqrt [s (s-a) (s-b) (s-c)]
	s = a+b+c / 2
*/
#include<stdio.h>
main()
{
	int a, b, c;
	float s, area;
	printf("\nEnter 1st side: ");
	scanf("%d",&a);
	printf("\nEnter 2nd side: ");
	scanf("%d",&b);
	printf("\nEnter 3rd side: ");
	scanf("%d",&c);
	
	s = (a + b + c) / 2.0;
	area = s * (s-a) * (s-b) * (s-c);
	area = sqrt(area);
	
	printf("\nArea of triangle: %.2f",area);
	
}
