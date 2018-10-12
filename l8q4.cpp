//. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. 
#include<iostream>
using namespace std;
int merge(int a[],int m, int b[],int n, int c[])
{
	 int i, j, k;
 
  j = k = 0;
 
  for (i = 0; i < m + n;) {
    if (j < m && k < n) {
      if (a[j] < b[k]) {
        c[i] = a[j];
	cout<<i<<":"<<c[i]<<endl;
        j++;
      }
      else {
        c[i] = b[k];
        k++;
      }
	cout<<i<<":"<<c[i]<<endl;
      i++;
    }
    else if (j == m) {
      for (; i < m + n;) {
        c[i] = b[k];
	cout<<i<<":"<<c[i]<<endl;
        k++;
        i++;
      }
    }
    else {
      for (; i < m + n;) {
        c[i] = a[j];
	cout<<i<<":"<<c[i]<<endl;
        j++;
        i++;
      }
    }}
  	/*for(int i=0;i<m+n;i++)
	cout<<"the merged array is :"<<c[i]<<endl;*/
}
int main()
{
 int a[2],b[2],c[4],m,n;
cout<<"enter the size of array a nd b"<<endl;
cin>>m>>n;
 cout<<"enter the elemnts of a"<<endl;
 for(int i=1;i<=m;i++)
	cin>>a[i];
 cout<<"enter the elemnts of b"<<endl;
for(int i=1;i<=n;i++)
	cin>>b[i];	
merge( a,m, b,n, c);

}
























