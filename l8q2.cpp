//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. )

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

int mean(int a[5], int sum, int mean)//function to find mean element
{ 	
	for(int i=0; i<5;i++)
		{sum+=a[i];
		mean=sum/5; }
	
	

	cout<<"the mean element of array is:"<<mean<<endl;

}

int median(int a[5],int temp, int med )//function to finf median
{ 	
	for(int i=0;i<5;i++)
	{		
		for(int j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp  =a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	
		
		if(5%2==0)
			med=a[5]/2;
		else
			 med=a[(5+1)/2]+a[5]/2;
	
	
	cout<<"the median element of array is:"<<med<<endl;

	

	
}

int main()
{ 	int a[5],l,s,temp;
	cout<<"enter the 5 elements of array"<<endl;
	for(int i=0; i<5; i++)//loop to take in values of array
	cin>>a[i];
	
	large(a,l);
	small(a,s);
	mean(a,0,1);
	median(a,temp,1);
}
