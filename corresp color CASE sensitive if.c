#include<stdio.h>
main()
{
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);
	
	if(ch == 'b' || ch == 'B')
	{
		printf("black blue brown");
	}
	else if (ch == 'r' || ch == 'R')
	{
		printf("red");
	}
	else if (ch == 'p' || ch == 'P')
	{
		printf("pink");
	}
	else if (ch == 'g' || ch == 'G')
	{
		printf("green");
	}
	else if (ch == 'y' || ch == 'Y')
	{
		printf("yellow");
	}
	else if (ch == 'o' || ch == 'O')
	{
		printf("orange");
	}
	else
	{
		printf("enter other character");
	}
}
