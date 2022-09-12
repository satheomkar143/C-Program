#include<stdio.h>
main()
{
	float a, b, c;
	char ch;
	printf("Enter two value  :  ");
	scanf("%f%f",&a,&b);
	printf("Enter operator(+ - * /)  : ");
	scanf(" %c",&ch);
	
	switch (ch)
	{
		case '+':
			c = a+b;
			printf("%.2f + %.2f = %.2f",a,b,c);
			break;
		case '-':
			c = a-b;
			printf("%.2f - %.2f = %.2f",a,b,c);
			break;
		case '*':
			c = a*b;
			printf("%.2f * %.2f = %.2f",a,b,c);
			break;
		case '/':
			c = (float)a/b;
			printf("%.2f / %.2f = %.2f",a,b,c);
			break;
	}
}
