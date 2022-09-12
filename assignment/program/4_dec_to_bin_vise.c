#include<stdio.h>
#include<math.h>
main()
{
	int n, rem, i=1, temp, bin=0, dec=0;
	printf("Enter decimal number = ");
	scanf("%d",&n);
	temp =n;
	
	// decimal to binary
	/*  2   25
		2	12	1
		2	6	0
		2	3	0
		2	1	1
			0	1
	*/
		
	while(n!=0)
	{
		rem = n%2;
		bin = bin + rem * i;
		i = i * 10;
		n = n / 2;
	}
	printf("\nBinary value of %d is %d",temp,bin);
	
	// binary to decimal
	// 1011 = 1*2^3 + 0*2^2 + 1*2^1 + 1*2^0
	
	printf("\n\nEnter binary number = ");
	scanf("%d",&n);
	temp =n;
	
	for(i=0; n!=0; i++)
	{
		rem = n % 10;
		dec = dec + rem * pow(2,i);
		n = n/10;
	}
	
	printf("\nDecimal value of %d is %d",temp,dec);
	
	
	
	
	
	
	
	
	
	
	
}
