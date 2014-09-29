#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<cstdlib>


using namespace std;

#define ll long long int

ll a[200001];

ll R(ll n,ll c)
{
  if(n<c) return 0;
  else
  {
    return n-c+1;
  }
}

int main()
{
	  ll n,t,c;
	  ll sum=0,res=0;
	  cin>>n>>t>>c;
	  
	  for(int i=0;i<n;i++)
	  {
	    cin>>a[i];
	    if(a[i]<=t)
	      sum++;
	    if(a[i]>t)
	    {
	      res += R(sum,c);
	      sum =0;
	    }
	  }
	  res += R(sum,c);
	  
	  
	  
	  cout<<res<<endl;
  
}