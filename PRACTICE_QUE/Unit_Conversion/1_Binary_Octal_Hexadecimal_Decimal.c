/*
Base 10 (Decimal) — Represent any number using 10 digits [0–9]
Base 2 (Binary) — Represent any number using 2 digits [0–1]
Base 8 (Octal) — Represent any number using 8 digits [0–7]
Base 16(Hexadecimal) — Represent any number using 10 digits and 6 characters [0–9, A, B, C, D, E, F]
*/

	// decimal to binary   		decimal to octal 			decimal to hexadecimal
	/*  2   25					8	501								16	501
		2	12	1				8	62	5	0.625*8=5				16	31	5
		2	6	0				8	7	6	0.75*8=6				16	1	15 F
		2	3	0					0	7	0.875*8=7					0	1
		2	1	1
			0	1 501  = 111110101		501  = 765						501 = 1F5
	*/

#include<stdio.h>
#include<math.h>
main()
{
	int n, rem, i=1, j, temp, bin=0, a[100];
	printf("Enter decimal number = ");
	scanf("%d",&n);
	temp =n;
		
	// 1 decimal to binary 	
	while(n!=0)
	{
		rem = n%2;
		bin = bin + rem * i;
		i = i * 10;
		n = n / 2;
	}
	printf("\nBinary value of %d is %d",temp,bin);
	
	// 2  decimal to octal
	i=1;
	n=temp, bin=0;
	while(n!=0)
	{
		rem = n%8;
		bin = bin + rem * i;
		i = i * 10;
		n = n / 8;
	}
	printf("\nOctal value of %d is %d",temp,bin);
	
	// 3  decimal to hexadecimal
	n=temp, bin=0;
	for(i=0;n!=0;i++)
	{
		rem = n%16;
		if(rem<10)
			rem = rem + 48;       //convert 1to9 into ascii value
		else
			rem = rem + 55;		// convert 10 into A and so on....
		n = n / 16;
		a[i] = rem;
	}
	printf("\nHexadecimal value of %d is ",temp);
	for(j=i-1;j>=0;j--)
		printf("%c",a[j]);
}
