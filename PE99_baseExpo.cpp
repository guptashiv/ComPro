#include<iostream>
#include<cmath>
using namespace std;

double loger[1000];
long a[1000][2];

int main()
{

  double max=0,k;
  for(int i=0;i<1000;i++)
  {
    cin>>a[i][0]>>a[i][1];
    
    loger[i]=a[i][1]*log(a[i][0]);
    if(loger[i]>max)
    {
      max=loger[i];
      k=i+1;
    }
//     cout<<a[i][0]<<" "<<a[i][1]<<" "<<loger[i]<<endl;
  }
  
  cout<<k<<endl;
}