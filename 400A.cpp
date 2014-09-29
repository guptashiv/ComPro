#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int t;
  string a;
  
  cin>>t;
  while(t--)
  {
    vector<string > ar;
    cin>>a;
    if(a[0]=='X'||a[1]=='X'||a[2]=='X'||a[3]=='X'||a[4]=='X'||a[5]=='X'||a[6]=='X'||a[7]=='X'||a[8]=='X'||a[9]=='X'||a[10]=='X'||a[11]=='X')
      ar.push_back("1x12");
    if(a[0]=='X'&&a[6]=='X'||a[1]=='X'&&a[7]=='X'||a[2]=='X'&&a[8]=='X'||a[3]=='X'&&a[9]=='X'||a[4]=='X'&&a[10]=='X'||a[5]=='X'&&a[11]=='X')
      ar.push_back("2x6");
    if(a[0]=='X'&&a[4]=='X'&&a[8]=='X' ||a[1]=='X'&&a[5]=='X'&&a[9]=='X' ||a[2]=='X'&&a[6]=='X'&&a[10]=='X' ||a[3]=='X'&&a[7]=='X'&&a[11]=='X')
      ar.push_back("3x4");
    if(a[0]=='X'&&a[3]=='X'&&a[6]=='X' &&a[9]=='X' ||a[1]=='X'&&a[4]=='X'&&a[7]=='X' &&a[10]=='X' ||a[2]=='X'&&a[5]=='X'&&a[8]=='X' &&a[11]=='X')  
      ar.push_back("4x3");
    if(a[0]=='X'&&a[2]=='X'&&a[4]=='X' &&a[6]=='X'&&a[8]=='X'&&a[10]=='X'||a[1]=='X'&&a[3]=='X'&&a[5]=='X' &&a[7]=='X'&&a[9]=='X'&&a[11]=='X')  
      ar.push_back("6x2");
    if(a[0]=='X'&&a[1]=='X'&&a[2]=='X'&&a[3]=='X'&&a[4]=='X'&&a[5]=='X'&&a[6]=='X'&&a[7]=='X'&&a[8]=='X'&&a[9]=='X'&&a[10]=='X'&&a[11]=='X')
      ar.push_back("12x1");
      
    cout<< ar.size()<<" ";
    for(int i=0;i<ar.size();i++)
    cout<<ar[i]<<" ";
    
    cout<<endl;
  }

}