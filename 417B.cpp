#include<iostream>

using  namespace std;

int main()
{
  int A[100001];
  for(int i=0;i<100001;i++) A[i]=-1;
  
  int n,k,x;
  cin>>n;
  bool flag=0;
  while(n--)
  {
    cin>>x>>k;
    if(A[k]==-1 ) 
    {
      if(x==0)
      A[k]=x;
      else
	flag=1;
    }
    else
    {
      if(A[k]+1<x )
      {
	flag=1;  
      }
      else if(A[k]+1==x)
      {
	A[k]=x;
      }
    } 
      
  }
  if(!flag)
    cout<<"YES"<<endl;
  else
     cout<<"NO"<<endl;
      return 0; 

}