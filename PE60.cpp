#include<iostream>
#include<vector>

using namespace std;
#define pb push_back

bool isNotPrime[9999999]={1,1,0};
vector<int> v;

int main()
{
  for(int i=2;i<3333;i++)
  {
    if(!isNotPrime[i])
    for(int j=i*i;j<9999999;j+=i)
    {
      isNotPrime[j] = 1;
    }
  }
  for(int i=2;i<9999999;i++)
  {
    if(!isNotPrime[i])
      v.pb(i);
  }
  
}
