#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main()
{
  int n,h[100004];
  cin>>n;
  int temp, res=0, en=0;
  h[0]=0;
  for(int i=1;i<=n;i++)
  {
    cin>>h[i];
    temp= h[i-1]-h[i];
    
    en+=temp;
    
    if(en<0)
    {
      res += -1*en;
      en=0;
    }
    
  }
  
  cout<<res<<endl;
  
}