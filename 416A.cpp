#include<iostream>
#include<vector>
#include<utility>

#define ll long long int
using namespace std;




int main()
{
  int n,m;
  
  cin>>n;
  
   string q[10000];
   ll x[10000];
   char ans[10000];    
   bool flag=1;
   ll max=2000000000, min = -2000000000;
   
  for(int i=0;i<n;i++)
  {
    cin>>q[i]>>x[i]>>ans[i];    
  }
  for(int i=0;i<n;i++)
  {
    if(q[i]==">")
    {
      if(ans[i]=='Y')
      {
	if(min<x[i]) min= x[i]+1;
// 	else
// 	{
// 	  flag=0;
// 	  break;
// 	}
      }
      if(ans[i]=='N')
      {
	if(max>x[i]) max = x[i];
	/*else
	{
	  flag=0;
	  break;
	}*/	  
      }
    }
    if(q[i]==">=")
    {
      if(ans[i]=='Y')
      {
	if(min<x[i]) min= x[i];
// 	else
// 	{
// 	  flag=0;
// 	  break;
// 	}
      }
      if(ans[i]=='N')
      {
	if(max>x[i]) max = x[i]-1;
	/*else
	{
	  flag=0;
	  break;
	}*/	  
      }
    }
    if(q[i]=="<")
    {
      if(ans[i]=='Y')
      {
	if(max>x[i]) max= x[i]-1;
// 	else
// 	{
// 	  flag=0;
// 	  break;
// 	}
      }
      if(ans[i]=='N')
      {
	if(min<x[i]) min = x[i];
	/*else
	{
	  flag=0;
	  break;
	}*/	  
      }
    }
    if(q[i]=="<=")
    {
      if(ans[i]=='Y')
      {
	if(max>x[i]) max= x[i];
// 	else
// 	{
// 	  flag=0;
// 	  break;
// 	}
      }
      if(ans[i]=='N')
      {
	if(min<x[i]) min = x[i]+1;
	/*else
	{
	  flag=0;
	  break;
	}*/	  
      }
    }
  }
  if(flag && max>=min )cout<<max<<endl;
  else cout<<"Impossible"<<endl;
}
