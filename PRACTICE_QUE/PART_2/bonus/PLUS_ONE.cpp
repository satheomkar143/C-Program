#include<iostream>
using namespace std;
int i,j;
void PLUS_ONE(int *a, int n)
{
	a[n-1] += 1; 
	for(i=n-1;i>0;i--)
	{
		if(a[i] > 9)
		{
			a[i-1] += (a[i] / 10);
			a[i] %= 10; 
		}
	}
	cout<<"\nnew array of digits by doing plus one to the number.\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}

main()
{
	int n, a[n];
	cout<<"\nEnter size of array: ";
	cin>>n;
	cout<<"\nEnter array elments:\n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	PLUS_ONE(a,n);	
}
