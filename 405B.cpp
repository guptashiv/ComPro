#include<iostream>

using namespace std;

int main()
{
  int n,res=0,sum=0;
  char a[3001];
  bool f1=0,f2=0,f3=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(i==n-1 && !f2)
    {
      if(a[i]=='R')
      {
	res+=sum;
	break;
      }
      if(a[i]=='.')
      {
	sum++;
	res+=sum;
	break;
      }
	
    }
    if(f1==0 && f2==0)
    {
      if(a[i]=='.') sum++;
      else if(a[i]=='L')
      {
	sum=0;f1=1;
      }
      else if(a[i]=='R')
      {
	res+=sum;
	sum=0;
	f2=1;
	f1=0;
      }
    }
    if(f1)
    {
      if(a[i]=='.') sum++;
      else if(a[i]=='L')
      {
	sum=0;f1=1;
      }
      else if(a[i]=='R')
      {
	res+=sum;
	sum=0;
	f2=1;
	f1=0;
      }
    }
    if(f2)
    {
      if(a[i]=='.')sum++;
      
      if(a[i]=='L')
      {
	  res+=sum%2;	  
	  f1=1;
	  f2=0;
	  sum=0;
	
      }
    }
    
  }
  cout<<res<<endl;
}