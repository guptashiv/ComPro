#include<iostream>


using namespace std;
#define ul long long
ul a[10000];

ul mod(ul n){
return(n>0)?n:-1*n;
}

int main()
{
  a[0]=0;
  for(int i=1;i<10000;i++)
     a[i]=i+a[i-1];
  
  
  int z,b;
  ul min=1000000000,c;
  for(int i=1;i<10000;i++){
    for(int j=1;j<10000&&i*j<2400000;j++){
      if((c=mod(a[i]*a[j]-2000000))<min)
      {
	z=i;b=j;min=c;
      }
    }
  }

  cout<<z<<" "<<b<<" "<<min<<" "<<z*b<<endl;    
}