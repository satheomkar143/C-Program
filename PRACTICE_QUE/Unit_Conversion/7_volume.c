#include<stdio.h>
main()
{
	double vol, volk, volc;
	printf("\nEnter volume in m^3: ");
	scanf("%lf",&vol);
	
	volk = vol / 1000000000;
	volc = vol * 1000000; 
	printf("\nVolume in km^2: %.9lf",volk);
	printf("\nVolume in cm^2: %.2lf",volc);
}
