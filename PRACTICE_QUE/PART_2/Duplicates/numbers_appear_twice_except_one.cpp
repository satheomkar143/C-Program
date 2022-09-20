#include<iostream>
using namespace std;
int i,j;
void find(int *a, int n)
{
	int count;
	for(i=0;i<n;i++)
	{
		count =0;
		for(j=0;j<n;j++)
		{
			if(i==j)
				continue;
			if(a[i] == a[j])
				count =1;
		}
		if(count == 0)
		{
			cout<<"\nThe number appear only one time is "<<a[i];
			exit(0);
		}
			
	}
}
main()
{
	int n, a[n];
	cout<<"\nEnter any even number of array size: ";
	cin>>n;
	cout<<"\nEnter array elements(all elements appear twice except any one)\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	find(a,n);
}
