#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<cstdlib>
using namespace std;

#define ul unsigned long long int
int main()
{
	int n,A[100004];
	cin>>n;
	int po=0,ne=0,re=0;
	for(int i=0;i<n;i++)
	{
	  cin>>A[i];
	  if(A[i]>0)po+=A[i];
	  if(A[i]==-1)
	  {
	    if(po>=1)
	      po--;
	    else
	    {
	      po=0;
	      re++;
	    }
	  }	  
	}
	cout<<re<<endl;
	
}