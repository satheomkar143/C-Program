#include<stdio.h>
main()
{
	int a= 50;
	int *p = &a;
	printf("\nvalue = %d",a);
	printf("\naddress = %u",&a);
	
	printf("\n\np = %d",p);
	printf("\naddress of p = %u",&p);
	printf("\nvalue of p = %d",*p);
	printf("\nvalue of p = %d",*&a);
}
