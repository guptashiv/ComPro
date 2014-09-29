#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll unsigned long long int
vector<ll> p;
ll M;
int sum(ll n)
{
  ll s;
  if(n%10==n) return 0;
  else
  {
    s=0;
    while(n)
    {
      s+=n%10;
      n/=10;
    }
  }
  return s;
}
void insert(ll i)
{
  cout<<"Insert "<<i<<endl;
  ll res=i;
  while(res>0 && res<(M/i))
  {
    //cout<<res<<endl;
    if(sum(res)==i)
      p.push_back(res);
    res*=i;
  }
}

bool ispower(ll n)
{
  ll m=n,s=0;
  while(m)
  {
    s+=m%10;
    m/=10;
  }
  if(s==1) return 0;
  while(n>0 && n%s==0)
  {
    n/=s;
  }
  if(n==1) return 1;
  return 0;    
}

int main()
{
  M=(1<<31);
  int k=16;
  for(ll i=2;i<200;i++)
  { insert(i);
  }
  sort(p.begin(),p.end());
  for(int i=0;i<p.size();i++)
  {
    cout<<i+1<<": "<<p[i]<<endl;
  }
}