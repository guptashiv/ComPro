#include<iostream>

using namespace std;

char a[1000][1000];
int ctr[1000]={0};
bool tr[1000]={0};
int main()
{
  int n,m;
  cin>>n>>m;
  bool flag=0;
  for(int i=0;i<n;i++)
  {
    bool f1=1,f2=0,f3=0;
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
      if(!f2 && a[i][j]=='G')
      {
	f2=1;
      }
      if(f2 && a[i][j]=='S')
      {
	f3=1;
      }
      if(f2&& !f3 && a[i][j]!='S')
      ctr[i]++;
      
      if(!f2 && a[i][j]=='S')
	flag=1;
    }
    
  }
  for(int i=0;i<n;i++)
  {
    
    tr[ctr[i]]=1;
  }
  int res=0;
  for(int i=0;i<1000;i++)
  {
    
    if(tr[i]) res++;
  }
  
  if(!flag)cout<<res<<endl;
  
  else cout<<"-1"<<endl;

}