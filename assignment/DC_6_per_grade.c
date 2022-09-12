#include<stdio.h>
main()
{
	int p, c, m, cs, b, sum;
	float per;
	
	printf("enter 5 subjects marks: ");
	scanf("%d%d%d%d%d",&p, &c, &m, &cs, &b);
	
	sum = p + c + m + b + cs;
	
	per = sum * 100/500.0;
	
	printf("percentage = %.2f\n",per);
	
	if(per >=90 && per <= 100)
		printf("Grade A");
	else if(per >=80 && per <= 90)
		printf("Grade B");
	else if(per >=70 && per <= 80)
		printf("Grade C");
	else if(per >=60 && per <= 70)
		printf("Grade D");
	else if(per >=40 && per <= 60)
		printf("Grade E");
	else
		printf("Grade F");
		
}
