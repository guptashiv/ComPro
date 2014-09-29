#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int a[2001][2001];
int dp[4001][2];
int b[2001][2001]={0};
void fill(int x, int y, int rs)
{
  if(x<0 || y<0)
      return;    
  
  else
  {
    b[x][y]=a[x][y]+rs;
    fill(x-1, y-1, rs+a[x][y]);
  
  
  fill(x-1,y,a[x-1][y]);
  fill(x, y-1,a[x][y-1]);
  }
}


int main()
{
  int n;
  
  cin>>n;
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      cin>>a[i][j];
    
    int res=0;
  fill(n-1, n-1,0);
  
  for(int i=0;i<n;i++)
  {for(int j=0;j<n;j++)
     cout<<b[i][j]<<" ";
     
     cout<<endl;
  }
  
}