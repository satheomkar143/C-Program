#include<iostream>
using namespace std;
int i,j;

void duplicate(int *a, int n)
{
	int temp, count=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=0;
			}
		}		
	}
}

void show(int *a, int n)
{
	cout<<"\nArray after deleting duplicate elements:\n";
	for(i=0;i<n;i++)
	{
		if(a[i] != 0)
			cout<<a[i]<<"\t";
	}
}

main()
{
	int n, a[n];
	cout<<"\nEnter array size: ";
	cin>>n;
	cout<<"\nEnter array elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	duplicate(a,n);
	show(a,n);
}
