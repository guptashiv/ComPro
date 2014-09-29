#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;


int gcd(int a, int b)
{
  if(b==0)return a;
  if(a<b) return gcd(b,a);
  else return gcd(b,a%b);
}

vector< vector<int> >L(100004);




int main()
{
  int a[100004];
//   bool bit[100004]={0};
  int par[100004];
  
  int n,q,u,v;
  cin>>n>>q;
  for(int i=0;i<n;i++)
  {
    cin>>a[i+1];
  }
  par[1]=0;
  for(int i=1;i<n;i++)
  {
    cin>>u>>v;
    par[v]=u;
    L[u].push_back(v);
  }
  
  for(int i=n;i>1;i--)
  {
    u=par[i];
    while(u!=0)
    {
      res+=
    }
  }
  
  
  int x,y,z,res[100004]={0};
  for(int i=0;i<q;i++)
  {
    cin>>x;
    if(x==1)
    {
      cin>>y;
      if(res[y]==0)
      {
	u=par[y];
	
	while(u!=0)
	{
	  if(gcd(par[u], y)>1 && gcd(par[u],y)>res[y])
	    res[y]
	}
      }
    }
      
  }
  
  
}