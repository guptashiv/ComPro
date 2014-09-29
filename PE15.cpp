#include<iostream>

using namespace std;

int main()
{

  long long int a[15][15];
  for(int i=0;i<15;i++)
    a[i][14]=1;
  for(int i=0;i<15;i++)
    a[14][i]=1;
  
  for(int i=13;i>0;i--)
    for(int j=13;j>0;j--)
    {
      a[i][j] = a[i+1][j]+a[i][j+1];
    }
    
  for(int i=13;i>=0;i--)
  cout<<a[i][i]<<',';  

}