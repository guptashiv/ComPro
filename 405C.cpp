#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std ;
#define gc getchar_unlocked
#define ul int
void inp(ul &x)
{
    register ul c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
int n,q,t,t2;
int a[1001][1001];
bool fl=0;
cin>>n;
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
{
  inp(a[i][j]);
}
}
int res=0;
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    res+=a[i][j]*a[j][i];
    
  }
}
res=res%2;
cin>>q;
for(int i=0;i<q;i++)
{
  inp(t);
//   /*printf*/("%d",t);
  if(t==1||t==2)
  {
    inp(t2);
    res++;
    res=res%2;
  }
  if(t==3)
  {
   printf("%d",res);
  }
}

}