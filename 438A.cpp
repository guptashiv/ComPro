#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstring>
using namespace std;
#define ul long long
#define pb push_back
#define mk make_pair
#define fs first
#define sc second

int main()
{
  string a,b,c,d;
  cin>>a>>b>>c>>d;
  int q,w, e,r;
  q=a.length()-2;
  w=b.length()-2;e=c.length()-2;r=d.length()-2;
  vector <pair<int,char> >p;
  p.pb(mk(q,'A'));p.pb(mk(w,'B'));p.pb(mk(e,'C'));p.pb(mk(r,'D'));
  
  sort(p.begin(),p.end());
  if(p[0].fs<=p[1].fs/2 && p[3].fs<2*p[2].fs)
      cout<<p[0].sc<<endl;
  else if(p[0].fs>p[1].fs/2 && p[3].fs>=2*p[2].fs)
      cout<<p[3].sc<<endl;
  else
      cout<<"C"<<endl;
  
  
}