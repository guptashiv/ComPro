#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<cstdlib>

using namespace std;
#define ul unsigned long long int


bool ismirr(bool A[101][101], int n, int m)
{
  if(n%2) return false;
  for(int i=0;i<n/2;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(A[i][j]!= A[n/2+i][j]) return false;
    }
  }  
  return true;
}

int main()
{
	int n,m;
	bool A[101][101];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
	  for(int j=0;j<m;j++)
	  {
	    cin>>A[i][j];
	  }	  
	}
	bool flag=0;
	if(n%2) cout<<n<<endl;
	else
	{
	  while(ismirr(A,n,m))
	  {
	    n /=2;
	  }
	  
	  cout<<n<<endl;
	}
	
	
	
	
	
	
	
}	