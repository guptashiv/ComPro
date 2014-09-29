#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

vector <char> Stack;

int min(int a,int b)
{
  return a>b ? b :a;
}
int ctr=0;
void Push(char ch)
{
  Stack.push_back(ch);
  ctr++;
}

char Pop()
{
  char t= *(Stack.end()-1);
  Stack.erase(Stack.end()-1,Stack.end());
  ctr--;
  return t;
}

bool isempty()
{
  return (Stack.begin()==Stack.end());
}


int main()
{
  int n,i,j,res=0;
  string s;
  cin>>s;
  cin>>n;
  while(n--)
  {
    res=0;
    cin>>i>>j;
    for(int k=i-1;k<j;k++)
    {
      if(s[k]=='(') Push('(');
      else
      {
	if(!isempty())
	{
	  Pop();
	  res+=2;
	}
      }
    }
    cout<<res<<endl;
    Stack.erase(Stack.begin(),Stack.end());
    ctr=0;
  }
}