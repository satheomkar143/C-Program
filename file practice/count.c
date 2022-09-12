#include<stdio.h>
main()
{
	int uc=0, lc=0, dg=0, sp=0, sc=0;
	char ch;
	FILE *fp;
	fp = fopen("count.txt","r");
	printf("\nGiven string:\n");
	while((ch=fgetc(fp)) != EOF)
	{
		printf("%c",ch);
		if(ch>=65 && ch<=90)
			uc++;
		else if(ch>=97 &&ch<=122)
			lc++;
		else if(ch>=48 && ch<=57)
			dg++;
		else if(ch == ' ')
			sp++;
		else
			sc++;
	}
	printf("\nUpper case character: %d",uc);
	printf("\nLower case character: %d",lc);
	printf("\ndigits: %d",dg);
	printf("\nspace: %d",sp);
	printf("\nspecial character: %d",sc);
}
