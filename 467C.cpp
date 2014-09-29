#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long

int main()
{
  int n,m,k;
  ll p[5005], s[5005];
  
  ll dp[5005];
  
  cin>>n>>m>>k;
  for(int i=0;i<n;i++)
    cin>>p[i];
  for(int i=0;i<n-m+1;i++)
  {
    ll sm=0;
    for(int j=0;j<m;j++)
    {
      sm+=p[i+j];
    }
    s[i]=sm;
  }
  ll mx=0;
  for(int i=0;i<m;i++)
  {
    mx=max(mx,s[i]);
    dp[i]=mx;
  }
  for(int 
}