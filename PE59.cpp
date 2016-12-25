#include<iostream>

using namespace std;

int strToi(string a)
{
  int res =0;
  for(int i=0; i<a.length(); i++)
  {
    res = (res<<3)+(res<<1)+(a[i]-'0');  
  }
  return res;
}

int main()
{
  string s;
  cin>>s;
  int l = s.length();
  int ctr=0;
  int arr[2000];
  string temp="";
  for(int i=0;i<l;i++)
  {    
    if(s[i]==',')
    {
      arr[ctr++] = strToi(temp);
      temp="";
    }
    else
    {
      temp += s[i];
      if(i==l-1)
      {
        arr[ctr++] = strToi(temp);
      }    
    }
  }
  int key[3] = {103,111,100};
  int guess[3];
  int count=0;
  char tmp;
  cout<<ctr<<endl;
        for(int i=0;i<ctr;i+=3)
        {
          for(int j=0;j<3;j++)
          {
            count += ((arr[i+j])^(key[j]));
            cout<<char((arr[i+j])^(key[j]));
          }          
        }
        cout<<endl<<count<<endl;              
       
}
