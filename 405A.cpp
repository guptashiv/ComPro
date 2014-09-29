#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{int n, a[101],count[101]={0};
cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    count[a[i]]++;
  }
  for(int i=0;i<=100;i++)
  {
    for(int j=0;j<count[i];j++)
    {
      cout<<i<<" ";
    }
  }
  cout<<endl;
  
}