//A mean value is the average value, which will fall between the maximum and minimum value in the data set.
//Median, in statistics, is the middle value of the given list of data, when arranged in an order.
//The mode is the value that appears most often in a set of data.

#include<iostream>
using namespace std;
int i, j;
void sum(int a[], int n)
{
	int sum =0;
	for(i=0;i<n;i++)
		sum += a[i];
	cout<<"\nSum of all elements: "<<sum;
}
void mean(int a[], int n)
{
	float sum =0, mean;
	for(i=0;i<n;i++)
		sum += a[i];
		
	mean = sum / n;
	cout<<"\nmean of array: "<<mean;
}
void median(int a[], int n)
{
	int temp;
	float median;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	if(n%2 != 0)
		median = a[n/2];
	else
		median = ( a[n/2] + a[(n/2)-1] ) / 2.0;

	cout<<"\nmedian of array: "<<median;
}

main()
{
	int n, a[n];
	cout<<"\nEnter array size: ";
	cin>>n;
	cout<<"\nEnter array elements: \n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	sum(a,n);
	mean(a,n);
	median(a,n);
}
