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
  
  int a[1002];
  int n,m,x,y;
  long res=0;
  cin>>n>>m;
  for(int i=1;i<=n;i++)
      cin>>a[i];
  
  for(int i=1;i<=m;i++)
  {
    cin>>x>>y;
    res += min(a[x],a[y]);
  }
  cout<<res<<endl;
}