#include<iostream>
using namespace std;
int i;
void remove(int *a, int n, int key)
{
	for(i=0;i<n;i++)
	{
		if(a[i] == key)
			a[i] = 0;
	}
}
void display(int *a, int n, int key)
{
	cout<<"\nAfter removing the "<<key<<" from array: \n";
	for(i=0;i<n;i++)
	{
		if(a[i] == 0)
			continue;
		cout<<a[i]<<"\t";
	}
		
}
main()
{
	int n, key, a[n];
	
	cout<<"\nEnter number of elements: ";
	cin>>n;
	cout<<"\nEnter elements of array: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	cout<<"\nEnter number of delete: ";
	cin>>key;
		
	remove(a, n, key);
	display(a, n, key);
	
}
