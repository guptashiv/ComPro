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
  return (ctr==0);//Stack.begin()==Stack.end());
}
  int res[1000001][3]={0};
int main()
{
  string s;
  int m,len;
  char temp;

  cin>>s;
  
  len = s.length();
  if(s[0]=='(') res[0][0]=1;
  
  
  if(s[0]=='(') Push('(');
  for(int i=1;i<len;i++)
  {
    res[i][0] = res[i-1][0];
    res[i][1]=res[i-1][1];
    if(s[i]=='(') 
    {
      Push('(');
      res[i][0]++;
    }
    else
    {
      
      if(!isempty())
      {
	res[i][1]++;
	temp=Pop();
      }
    }
    cout<<i+1<<" "<<s[i]<<" "<<res[i][0]<<" "<<res[i][1]<<endl;
  //res[i][2]=2*min(res[i][0],res[i][1]);
  }
  
  cin>>m;
  int i,j;
  while(m--)
  {
    cin>>i>>j;
    int r1,r2= res[j-1][0]-res[i-1][0]+(s[i-1]=='(');
	r1 = res[j-1][1]-res[i-1][1];
	
    cout<<2*min(r2,r1)/*res[j][2]-res[i][2]*/<<endl;
  }
  
}