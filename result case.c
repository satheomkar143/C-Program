#include<stdio.h>
main()
{
	int s1, s2, s3, s4, s5, sum;
	float avg, per;
	printf("Enter marks of 5 subjects\n");
	scanf("%d%d%d%d%d",&s1, &s2, &s3, &s4, &s5);
	
	sum = s1 + s2 + s3 + s4 + s5;
	avg = sum / 5;
	per = sum *100/500;
	
	printf("\n sum = %d",sum);
	printf("\n avg = %f",avg);
	printf("\n per = %f",per);
}
