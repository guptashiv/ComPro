
/** from the totient fucnion will be minimum if number of prime factors is higher so keep multiplying primes until 1000000 **/

#include<iostream>
#include<vector>
using namespace std;
double a[1000000]={1,1,0};
vector<int> pr;

int totient(int n)
{
  int i=0,res=n;
  if(!a[n])return (n-1);
  
  while(n>1)
  {
    if(n%pr[i]==0)
    {
      res-=res/pr[i];
      while(n%pr[i]==0)
      {
	n/=pr[i];
      }      
    }i++;
  }
  
  return res;
}
int main()
{
  for(int i=2;i<1000;i++)
  {
    if(!a[i])
      for(int j=i*i;j<1000000;j+=i)
      {
	 a[j]=1;
      }
  }
  
  for(int i=2;i<1000000;i++)
    if(!a[i])pr.push_back(i);
    
  int res=1,k=0;
  while(res*pr[k]<1000000)
  {
    res*=pr[k];
    k++;
  }
  cout<<k<<" "<<res<<" "<<totient(res)<<endl;
    

}