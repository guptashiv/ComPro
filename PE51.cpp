#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
vector<int> pr;
vector<string> str;

string fun(int a, int last)
{
  string s="";
  int c[10]={0}, b=a;
  while(a)
  {
    c[a%10]++;
    a/=10;
  }
  b=a;
  

}


int main()
{
  bool a[1000000]={1,1,0};

  int size=0;
  for(int i=2;i<1000000;i++)
  if(!a[i])
  {
    pr.push_back(i);
    size++;
    for(int j=i*i; i<1000 && j<1000000;j+=i)
      a[j]=1;
  }

  for(int i=1;i<size;i++)
  {
    string s;
    int c[10]={0}, b=pr[i];
    while(b)
    {
      c[b%10]++;
      b/=10;
    }
    bool fl=0;
    for(int j=0;j<10;j++)
    {
      if(c[j]>1)
      { fl=1;
        b=pr[i];
        s="";
        while(b)
        {
            int u=b%10;
            b/=10;
            if(u==j)
            s = "a"+s;
            else
            s = char(u+'0')+s;
        }
        str.push_back(s);
 //       cout<<s<<" ";
      }
    }

  }
  
  sort(str.begin(),str.end());
  string last=str[0];
  for(int i=0;i<str.size();i++)
  {
    int ctr=1;
    while(str[i]==last)
    {
        ctr++;
        i++;
    }
    if(ctr>5)
    {
    
    for(int j=i-ctr;j<i;j++)
    cout<<str[j]<<endl;
    i--;}
    last=str[i];
  }
  return 0;
}
