#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main()
{
 int n,res=0;
 cin>>n;
 while(n--)
 {
   int p,q;
   
   cin>>p>>q;
   if(p<q-1)res++;
 }
   cout<<res<<endl;
   
  
}