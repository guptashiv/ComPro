#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

vector<pair<pair <double, int>, int >  > P;
vector<pair<int, int> > T;

int table[1001]={0};
int req[1001]={0};
int main()
{
  int m,n,p[1001],c,t,r;
  double ppp;
  cin>>n;
  m=n;
  for(int i=1;i<=n;i++)
  {
    cin>>c>>p[i];
    ppp = double(p[i])/double(c);
    cout<<ppp<<endl;
    P.push_back(make_pair(make_pair(ppp, c),i));
  }
  n=m;
  cin>>t;
  m=t;
  for(int i=1;i<=t;i++)
  {
    cin>>r;
    T.push_back(make_pair(r,i)); 
  }
  sort(P.begin(),P.end());
  reverse(P.begin(),P.end());
  sort(T.begin(),T.end());
  
  long int sum=0,re=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<t;j++)
    {
      if(T[j].first>=P[i].first.second)
      {
	if(table[T[j].second]==0 && req[P[i].second]==0)
	{
	  req[P[i].second]= T[j].second;
	  sum += p[P[i].second];
	  re ++ ;
	}
      }
    }
  }
  cout<<re <<" "<<sum<<endl;
  for(int i=1;i<1001;i++)
  {
    if(req[i])
    {
      cout<<i<<" "<<req[i]<<endl;
    }
  }
  
}