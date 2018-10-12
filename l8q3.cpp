// Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
#include<iostream>
using namespace std;
int small(int a[], int n, int k)
{	int temp,x;
	for(int i=1;i<=n;i++)//sorting the array ascending order
	{		
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				temp  =a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	for(int i=1;i<=n;i++)//displaying the kth largest element
	{	
		if(i==k)
		cout<<"the ktk smallest element is:"<< a[i]<<endl;
	}
}

int large(int a[], int n, int k)
{	int temp,x;
	for(int i=1;i<=n;i++)//sorting the array in descending order
	{		
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]<a[j])
			{
				temp  =a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	for(int i=1;i<=n;i++)//displayinf the kth largest element
	{	
		if(i==k)
		cout<<"the ktk largest element is:"<< a[i]<<endl;
	}
}
int main()
{
	int a[10],n,x,y;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	cout<<"enter the  elements of array"<<endl;
	for(int i=0; i<n; i++)//loop to take in values of array
	cin>>a[i];
	
	cout<<"which smallest element you want?"<<endl;
	cin>>x;
	small(a,n,x);
	cout<<"which largest element you want?"<<endl;
	cin>>y;
	large(a,n,y);

}
