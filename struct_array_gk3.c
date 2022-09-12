#include<stdio.h>
struct student
{
	int rollno,age,m1,m2,m3,total;
	float perc;
	char name[20];
};
main()
{
	struct student s[10];
	int i;
	printf("\n enter the values = ");
	for(i=0;i<5;i++)
	{
		printf("\n enter values of students %d",i+1);
		printf("\n enter rollno name and age of student %d",i+1);
		scanf("%d%s%d",&s[i].rollno,&s[i].name,&s[i].age);
		
		printf("\n enter the values of m1 m2 m3 student %d",i+1);
		scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
		
		s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
		s[i].perc = s[i].total / 3;
	}
	for(i=0;i<5;i++)
	{
		printf("\npercentage of students is =%.2f",s[i].perc);
	}
}
