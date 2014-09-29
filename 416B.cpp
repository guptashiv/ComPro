#include<iostream>
#include<algorithm>
#define ll long long int


using namespace std;

int A[50001][7]={0};

int main()
{
  
  int m,n,temp;
  cin>>m>>n;
  ll last=0;
  for(int i=1;i<=m;i++)
  {
    
    long int sum=0;
    
    A[i][0]+=A[i-1][0];
    for(int j=1;j<=n;j++)
    {
      cin>>temp;
      A[i][j]=max(A[i-1][j] , A[i][j-1]) + temp;;       
    }
    cout<<A[i][n]<<" ";

//     A[i][n+1]=sum;
   //cout<<A[i][n+1]<<" " ;
  }
}