#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main()
{
  int n,s;
  int x,y;
  int mx=-1;
  cin>>n>>s;
  for(int i=0;i<n;i++)
  {
    cin>>x>>y;
    if(x*100+y <= s*100)
    {
      if(y!=0)
      mx=max(mx, 100-y);
      else
	mx=max(mx,0);
    }
  }
  cout<<mx<<endl;
 
}