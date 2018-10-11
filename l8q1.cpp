//. Write a program to find sum of all elements of an array. (Use functions)
#include<iostream>
using namespace std;

int sum(int a[5], int sum)//funtion to find the sum
{	for(int i=0; i<5;i++) //loop to add elements of array
	{	 sum+=a[i]; }
	
	cout<<"the sum of all elements of array is:"<<sum<<endl;
}

int main()
{ 	int a[5];
	cout<<"enter the 5 elements of array"<<endl;
	for(int i=0; i<5; i++)//loop to take in values of array
	cin>>a[i];
	
 sum(a,0);
}
