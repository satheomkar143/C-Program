#include<iostream>
using namespace std;
int i;
void series(int *a, int n)
{
	int d, d1, d2;
	d1 = a[1] - a[0];
	d2 = a[n-1] - a[n-2];
	d = d1 < d2 ? d1 : d2;
	
	for(i=0;i<n-1;i++)
	{
		if((a[i+1] - a[i]) != d)
		{
			cout<<"\nmissing number = "<<a[i]+d;
			exit(0);
		}
			
	}
}
main()
{
	int n, a[n];
	cout<<"\nEnter array size: ";
	cin>>n;
	cout<<"\nEnter array elements(all elements in series except any one)\n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	series(a,n);
}
