#include<iostream>

using namespace std;
#define ll long long
ll a[100000];
bool c[100000000]={0};
ll reverse(ll n)
{
  if(n%10==n)return n;
  else
  {
    ll k=0;
    while(n)
    {
      k+=(n%10);
      k*=10;
      n/=10;
    }
    return k/10;
  }
}

bool ispalin(ll n)
{
  return (reverse(n)==n);
  
}
int main()
{
   a[0]=0;
   
  for(int i=1;i<30000;i++)
    a[i]=i*i+a[i-1];
  ll res=0,r=0;
  
  for(int i=1;i<30000;i++)
  {
    for(int j=i+1;j<30000;j++)
    {
      if((a[j]-a[i-1]<100000000) && ispalin(a[j]-a[i-1]) && !c[a[j]-a[i-1]])
      {r++;
// 	cout<<a[j]-a[i-1]<<endl;
	res+=a[j]-a[i-1];
	c[a[j]-a[i-1]]=1;
      }
    }
  }
  cout<<r<<" "<<res<<endl;
    
}