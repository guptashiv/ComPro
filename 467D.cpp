#include<iostream>
#include<algorithm>
#include<cstring>
#include<cctype>
#include<vector>
#include<locale>
using namespace std;

vector<int> res;
int bin(string a[],  string k, int st, int en)
{
  if(st>=en)return -1;
  int mid=st+(en-st)/2;
  
  if(a[mid]==k)
  {
    while(a[mid]==k)
    {
      res.push_back(mid);
      mid++;
    }
    return 1;
  }
  else if(a[mid]>k)
    {
      return bin(a, k, mid+1, en);
    }
    else
    {
      return (a,k,st,mid);
    }
}



int main()
{
  int n,m;
  string in[100001];
  string tmp,key,val;
  cin>>m;
  
  for(int i=0;i<m;i++)
  {
    cin>>tmp;
    string tm="";
    for(int jk=0;jk<tmp.length();jk++)
      tm += tolower(tmp[jk]);
    in[i]=tm;
  }
  sort(in,in+m);
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>key>>val;
    int lk, lv, ctr=0;
    lk = key.length();
    lv=  val.length();
    
    for(int i=0;i<lk;i++)
    {
      if(key[i]=='r')
	ctr++;
    }
    
    for(int i=0;i<lv;i++)
    {
      if(val[i]=='r')
	ctr--;
    }
    string rep, ch;
    if(ctr==0)
    {
      if(lk>lv)
      {
	rep=key;
	ch=val;
      }
      else
      {
	rep=val;ch=key;
      }
    }
    else if(ctr<0)
    {
      rep=val;
      ch = key;
    }
    else
    {
      rep =key;
      ch =val;
    }
    
    res.erase(res.begin(), res.end());
    int st = bin(in, rep, 0,m);
    if(st==1)
    {
      for(int i=0;i<res.size();i++)
	in[res[i]]= ch;
    }    
  }
  int pr=0,cr=0;
  for(int i=0;i<m;i++)
  {
    int ls=in[i].length();
    pr+=ls;
    for(int mn=0;mn<ls;mn++)
      if(in[i][mn]=='r')
	cr++;
  }
  cout<<cr<<" "<<pr-1<<endl;
}