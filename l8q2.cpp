//. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. 
#include<iostream>
using namespace std;

int large(int a[5], int l)//function to find largest element
{ 	l=a[0];
	for(int i=1; i<5;i++)
	{
	if( a[i]>l)
	l=a[i];
	
}
	cout<<"the largest element of array is:"<<l<<endl;

}
int small(int a[5], int s)//function to find smallest element
{ 	s=a[0];
	for(int i=1; i<5;i++)
	{
	if( a[i]<s)
	s=a[i];
	
}
	cout<<"the smallest element of array is:"<<s<<endl;

}

int mean(int a[5], int sum, int mean)//function to find smallest element
{ 	
	for(int i=0; i<5;i++)
		sum+=a[i];
		mean=sum/5;
	
	

	cout<<"the meanelement of array is:"<<mean<<endl;

}
int main()
{ 	int a[5], l,s;
	cout<<"enter the 5 elements of array"<<endl;
	for(int i=0; i<5; i++)//loop to take in values of array
	cin>>a[i];
	
	large(a,l);
	small(a,s);
	mean(a,0,1);
}
