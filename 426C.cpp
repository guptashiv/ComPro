#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<cstdlib>

using namespace std;

#define pb push_back
#define mk make_pair

int main()
{
	int n,k,t;
	int A[201], N[201],ctr=0;
	vector < pair<int,int> > P;
	vector<int> neg;
	int S[201]={0};
	cin>>n>>k;
	neg.pb(0);
	for(int i=1;i<=n;i++)
	{
	   cin>>t;
	   A[i]=t;
	   P.pb(mk(t,i));
	   if(t>=0)S[i] = t+S[i-1];
	   else
	   {
	     S[i]=0; 
	     neg.pb(i); ctr++;
	     N[i]=ctr;	     
	   }
	}
	sort(P.begin(), P.end());
	int max=0;
	
	int maxi,maxj;
	for(int i=1;i<=neg.size();i++)
	{
	  if(S[neg[i]-1]>max)
	  {
	    max=S[neg[i]-1];
	    maxi = neg[i-1]+1;
	    maxj = neg[i]-1;
	  }
	}
	for(int i=0;i<=n;i++)
	{
	  cout<<S[i]<<" ";
	}
	
	int negi, negj;
	negi = maxi-1;
	negj = maxj +1;
	for(int i= N[negi] ;i>0;i--)
	{
	  
	}
	
	
	
	
}