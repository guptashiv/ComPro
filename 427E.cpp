#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<cstdlib>
#include<cstdio>

using namespace std;
#define ll long long int

inline void fRd(ll &x) {
    register int c = getchar();
    x = 0;
    ll neg = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar());
    if(c=='-') {
        neg = 1;
        c = getchar();
    }
    for(; c>47 && c<58 ; c = getchar()) {
        x = (x<<1) + (x<<3) + c - 48;
    }
    if(neg)
        x = -x;
}


ll mod (ll a)
{
  return (a>0)?a:-1*a;
}

ll a[1000002];
int main()
{
	int n,m;
	ll sum=0, mn=0, req=0;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++)
	{
	  fRd(a[i]);
	  sum+=a[i];
	}
	mn = int(sum/n);
	sum=0;

	for(int i=0;i>=0&&i<n&&a[i]<int(mn+1);)
	{
	  sum += mod(a[i]-mn);
// 	  cout<<": "<<i<<" ";
	  i+=m;
	}
	
	for(int i=n-1;i>=0&&i<n&&a[i]>int(mn);)
	{
	  sum += mod(a[i]-mn);
// 	  cout<<": "<<i<<" ";
	  i-=m;
	}
	req=2*sum;
	
	
	mn++  ;
	sum=0;
	for(int i=0;i>=0&&i<n&&a[i]<int(mn+1);)
	{
	  sum += mod(a[i]-mn);
// 	  cout<<": "<<i<<" ";
	  i+=m;
	}
	
	for(int i=n-1;i>=0&&i<n&&a[i]>int(mn);)
	{
	  sum += mod(a[i]-mn);
// 	  cout<<": "<<i<<" ";
	  i-=m;
	}
	req= min(req, 2*sum); 
	cout<<req<<endl;
	
}