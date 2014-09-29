#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

string res(string a,string b, string c)
{
	int l=0,r=0,k=0;
	
	l=a.length();
	r=b.length();
	k=c.legnth();
	
	if(l==r && k==0)return(a+"|"+b);

	if((k-max(l,r)+min(l,r))%2)return ("Impossible");
	else
	{
		if(l>r)
		{
			for(int i=0;i<k-l-r;i++)
			{ 
			}
		}
	}

}


int main()
{

	string a,b,c;
	getline(cin,a,'|');
	cin>>b>>c;
	cout<<a<<" "<<b<<" "<<c;


return 0;
}
