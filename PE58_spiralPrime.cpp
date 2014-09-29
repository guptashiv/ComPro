#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool a[1000000]={1,1,0};
vector<long int> pr;


bool isprime(long n)
{
  if(n<1000000) return(!a[n]);
  else
  {
    int i=0;
  while(pr[i]*pr[i]<=n)
  {
    if(n%pr[i]==0) return true;
    i++;
  }}
}

int main()
{
    for(long int i=2;i<1000;i++)
    {
      if(!a[i])
	for(long int j=i*i;j<1000000;j+=i)
	  a[j]=1;
    }

    for(long int i=2;i<1000000;i++)
      if(!a[i])
	pr.push_back(i);
      
      long res=0,i=0;
    double ratio=1;
   for(i=3;ratio>=.1;i+=2)
   {
     if(isprime(i*i-i+1))res++;
     if(isprime(i*i-2*i+2))res++;
     if(isprime((i-1)*(i-1)-i+2))res++;
    
     ratio=double(res)/double(2*i-1);
     cout<<i<<" "<<res<<" "<<ratio<<endl;
  }
      cout<<i<<endl;
      
/*	
   long n, i=1;
   double res=0,ratio=1;
   bool fl=0;
   while(pr[i]<1000000 && ratio>=.10)
   {
     fl=0;
      n=int(sqrt(pr[i]))+1;
      if(n%2==0)n++;
      
      if( pr[i]==(n-1)*(n-1)+1 || pr[i]==n*n-n+1 || pr[i]==(n-1)*(n-1)-n+2)
      {
	res++;
	fl=1;
      }
      
      ratio =res/(2*n-1);
cout<<pr[i]<<"--> "<<fl<<" "<<n<<" "<<i<<" "<<res<<" "<<ratio<<endl;;
      
      i++;
   }
   cout<<pr[i]<< " " <<n<<" "<<i<<" "<<ratio;
  */  
}