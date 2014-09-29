#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct big
{
  int rank;
  char high;
};

struct *highest(string a[])
{
  char st= a[0][1];
  struct node* =new big;
  
  bool fl=1;
  for(int i=1;i<5;i++)
    if(a[i][1]!=st)
    {
      fl=0;
      break;
    }
  if(fl)  
  {
    if(a[0][0]=='A' && a[4][0]=='E')
    {
      node-> rank=10;
      node->high = '';
      
      return node;
    }    
   		//royal flush done!
   		
   
  }
  
  
  
}



int main()
{
  
}