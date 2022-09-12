#include<stdio.h>
main()
{
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);
	
	if(ch == 'b')
	{
		printf("black blue brown");
	}
	else if (ch == 'r')
	{
		printf("red");
	}
	else if (ch == 'p')
	{
		printf("pink");
	}
	else if (ch == 'g')
	{
		printf("green");
	}
	else if (ch == 'y')
	{
		printf("yellow");
	}
	else if (ch == 'o')
	{
		printf("orange");
	}
	else
	{
		printf("enter other character");
	}
}
