#include<stdio.h>
void swap(int , int );
main()
{
	int n1, n2;
	printf("\nenter n1 & n2: ");
	scanf("%d%d",&n1,&n2);
	printf("\nbefore swapping n1 = %d and n2 = %d",n1,n2);
	swap(n1,n2);
	printf("\nafter swapping in main n1 = %d and n2 = %d",n1,n2);
}

void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("\nafter swapping in function n1 = %d and n2 = %d",x,y);
}
