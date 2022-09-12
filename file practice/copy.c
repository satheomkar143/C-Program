#include<stdio.h>
main()
{
	char ch;
	FILE *fp1, *fp2;
	fp1 = fopen("copy1.txt","r");
	fp2 = fopen("copy2.txt","w");
	
	if(fp1 == 0)
		printf("\nsource file does not exist.\n");
	else
	{
		while((ch = fgetc(fp1)) != EOF)
		{
			fputc(ch,fp2);
		}
		printf("\nfile copied successfully");
	}
	fclose(fp1);
	fclose(fp2);
}
