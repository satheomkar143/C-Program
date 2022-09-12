#include<stdio.h>
main()
{
	int roll, i, n;
	float mark;
	char ch, name[20];
	FILE *fp;
	fp = fopen("write.txt","w+");
	
	printf("\nEnter number of records: ");
	scanf("%d",&n);
	
	fprintf(fp, "Roll no\tName\tmarks\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter roll no.: ");
		scanf("%d",&roll);
		fprintf(fp," %d\t",roll);
		
		printf("\nEnter name: ");
		scanf("%s",&name);
		fprintf(fp,"%s\t",name);
		
		printf("\nEnter mark: ");
		scanf("%f",&mark);
		fprintf(fp,"%.2f\n",mark);
	}
	
	rewind(fp);
	while(( ch = fgetc(fp)) != EOF)
	{
		printf("%c",ch);
	}
	
	
	fclose(fp);
}
