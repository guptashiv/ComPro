#include<iostream>

using namespace std;


long long int bitcount(long long int n)
{
  long long int ctr=0;
  while(n)
  {
    ctr++;
    n = n&(n-1);
  }
  return ctr;
}


int main(){
  long long int n,m,k,a[1001];
  cin>>n>>m>>k;
  for(long long int i=0;i<m+1;i++)
    cin>>a[i];

  long long int res=0;
  for(long long int i=0;i<m;i++)
  {
    long long int p = a[i]^a[m];
    if(bitcount(p)<=k)
      res++;
  }
  cout<<res<<endl;
}