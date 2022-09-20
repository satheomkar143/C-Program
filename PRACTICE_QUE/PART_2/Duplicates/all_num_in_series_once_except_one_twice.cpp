#include<iostream>
using namespace std;
int i;
void series(int *a, int n)
{	
	for(i=0;i<n-1;i++)
	{
		if((a[i+1] - a[i]) == 0)
		{
			cout<<"\nrepeated number = "<<a[i];
			exit(0);
		}
			
	}
}
main()
{
	int n, a[n];
	cout<<"\nEnter array size: ";
	cin>>n;
	cout<<"\nEnter array elements(all elements in series except any one appear twice)\n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	series(a,n);
}
