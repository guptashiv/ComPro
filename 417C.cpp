#include<iostream>

using namespace std;

int A[1000][1000]={0};
int main()
{
  int n,k;
  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
    int m=(i+1)%n;
    for(int j=m;j<m+k;j++)
    {
      if(A[i][j%n]==0)
      {
	A[i][j%n]=1;
	A[j%n][i] =2;
      }
      if(A[i][j%n]==2)
      {
	cout<<-1<<endl;
	return 0;
      }
    }
  }
  cout<<n*k<<endl;
   for(int i=0;i<n;i++)
  {
    int m=(i+1)%n;
    for(int j=m;j<m+k;j++)
    {
      cout<<i+1<<" "<<(j%n)+1<<endl;      
    }
  }
  
}