#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<cstdlib>

using namespace std;
#define ul unsigned long long int


int main()
{
	long int n,s,m,t,sum=0,Max=0;
	cin>>n>>s;
	m=n;
	while(m--)
	{
	  cin>>t;
	  sum+=t;
	  
	  if(Max<t)
	  {    
	    Max=t;
	  }  
// 	  U.push_back(t);
	}
	sum -= Max;
	if(sum>s) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	
	
	
}	

