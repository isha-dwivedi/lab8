/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* Write a program to merge 2 arrays (just one after another into another array), 
find maximum of 2 arrays [maximum element of all the elements in both the arrays], 
find minimum of 2 arrays */
#include <iostream>

using namespace std;

int merge (int a[], int m, int b[], int n, int c[])
{
  int i, j, k,max,min;

  j = k = 0;

  for (i = 0; i < m + n;)
    {
      if (j < m && k < n)
	{
	  if (a[j] < b[k])
	    {
	      c[i] = a[j];
	      j++;
	    }
	  else
	    {
	      c[i] = b[k];
	      k++;
	    }

	  i++;
	}
      else if (j == m)
	{
	  for (; i < m + n;)
	    {
	      c[i] = b[k];

	      k++;
	      i++;
	    }
	}
      else
	{
	  for (; i < m + n;)
	    {
	      c[i] = a[j];
	      //cout<<i<<":"<<c[i]<<endl;
	      j++;
	      i++;
	}}    }
	
      cout << "the merged array is :" << endl;
      for (int i = 0; i < m + n; i++)
      { cout << c[i] << endl;}
        
    for(int i=1; i<m+n;i++)//condition to check the max of two arrays
    { max=c[0];
        if(c[i]>max)
            max=a[i];
    }
    cout<<"the max of merged array is:"<<max<<endl;
    
    for(int i=1; i<m+n;i++)//condition to check the min of two arrays
    { min=c[0];
        if(c[i]<min)
            min=a[i];
    }
    cout<<"the min of merged array is:"<<min<<endl;
    
    }
  int main ()
  {
    int a[5], b[5], c[10], m, n;
    cout << "enter the size of array a nd b" << endl;
    cin >> m >> n;
    cout << "enter the elemnts of a" << endl;
    for (int i = 1; i <= m; i++)
      cin >> a[i];
    cout << "enter the elemnts of b" << endl;
    for (int i = 1; i <= n; i++)
      cin >> b[i];
    merge (a, m, b, n, c);

  }
