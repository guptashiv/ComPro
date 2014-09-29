#include<iostream>

using namespace std;

int main()
{
  long long int A[100001],B[100001],n;
  long long res=0;
  cin>>n;
  for(long int i=0;i<n;i++)
  {
    cin>>A[i];
  }
  for(long int i=0;i<n;i++)
  {
    cin>>B[i];
    long long int req=B[i]/2,rq;
    rq=B[i]-req;
    if(req <= A[i] && req>=1 && rq>=1 && rq<=A[i])
      res += req*rq;
      
    else
      res-=1;
  }
  
  cout<<res<<endl;
return 0;
}