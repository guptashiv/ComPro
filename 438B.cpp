#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;
#define ul long long
#define pb push_back
#define mk make_pair
#define fs first
#define sc second

int main()
{
            
      int a[100001],n,m;
      for(int i=1;i<100001;i++) 
      {
	a[i] = (i&-i);
// 	cout<<a[i]<<" ";
      }
      cin>>n>>m;
      vector<int> ans;
      for(int i=m;n>0&&i>0;i--)
      {
	if(a[i]<=n)
	{
	  n-=a[i];
	  ans.pb(i);
	}
	
      }
      if(n<=0)
      {
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++)
	  cout<<ans[i]<<" ";
      }
      else cout<<-1;
      
      cout<<endl;
      
}