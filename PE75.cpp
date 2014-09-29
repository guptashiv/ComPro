#include<iostream>
#include<cmath>

using namespace std;
#define l long long
int a[1500001]={0};

bool issquare(l n)
{
  if(n<=0)return false;
  l a= int(sqrt(n));
  return(n==a*a);
}
int main()
{
  l c;
  for(l i=5;i<751;i++)
  {
    for(l j=1;2*j*j<=i*i;j++)
    {
      if(issquare(i*i-j*j) && (c=j+i+int(sqrt(i*i-j*j)))<1500001)
      {
// 	cout<<i<<" "<<j<<" "<<c-i-j<<endl;
	a[c]++;
      }
    }
  }
  l r=0;
  for(int i=1;i<1500001;i++)
    if(a[i]==1)r++;
    
  cout<<r<<endl;  
  
}