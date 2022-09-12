#include<stdio.h>
main()
{
	FILE *fp1, *fp2;
	char ch;
	fp1 = fopen("file1.txt","r");
	fp2 = fopen("file2.txt","w");
	
	while((ch = getc(fp1)) != EOF)
	{
		putc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}
