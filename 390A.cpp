#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
  bool A[101][101]={0};
  int n;
  int r[101]={0},c[101]={0};
  cin>>n;
  for(int i=0;i<n;i++)
  {
  int x,y;
    cin>>x>>y;
    A[x][y]=1;
    r[x]++;
    c[y]++;
  }
  int rs=0,cs=0;
  for(int i=0;i<=100;i++)
  {
    if(r[i])rs++;
  }
  for(int i=0;i<=100;i++)
  {
    if(c[i])cs++;
  }
//   int r=0,c=0;
//   for(int i=0;i<100;i++)
//   {int sum=0;
//     for(int j=0;j<100;j++)
//     {
//       if(A[i][j])sum++;
//     }
//     A[i][100]=sum;
//     if(A[i][100])r++;
//   }
//   for(int i=0;i<100;i++)
//   {int sum=0;
//     for(int j=0;j<100;j++)
//     {
//       if(A[j][i])sum++;
//     }
//     A[100][i]=sum;
//     if(A[100][i])c++;
//   }
  cout<<min(rs,cs)<<endl;
  
}