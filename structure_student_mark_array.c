#include<stdio.h>
typedef struct student
{
	int roll_no, age, m1, m2, m3, total;
	char name[20];
	float per;	
}stud;

main()
{
	int n, i;
	stud s[20];
	
	printf("enter number of students: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("\nEnter data of student %d",i+1);
		printf("\nEnter roll no., name, age\n");
		scanf("%d%s%d",&s[i].roll_no,&s[i].name,&s[i].age);
		
		printf("\nEnter three subject marks:\n");
		scanf("%d%d%d",&s[i].m1 ,&s[i].m2 ,&s[i].m3);
		
		s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
		s[i].per = s[i].total/3.0;
	}
	
	printf("\n\nR_no.  name\tage\tsub1\tsub2\tsub3\ttotal\tper\n");
	for(i=0; i<n; i++)
	{
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%.2f",s[i].roll_no, s[i].name, s[i].age, s[i].m1, s[i].m2, s[i].m3, s[i].total, s[i].per);
	}
}
