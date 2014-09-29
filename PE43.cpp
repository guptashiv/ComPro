#include<iostream>
#include<cmath>
using namespace std;

#define ul unsigned long long 
int pr[]={2,3,5,7,11,13,17};

bool check(ul a, int i)
{
ul	res=0;
	
	for(int j=i;j<i+3;j++)
	{
		a%=int(pow(10,10-j));
		res = res*10;
		res+= a/int(pow(10,9-j));
	}
	
	return !(res%(pr[i-1]));
}

int main()
{
	ul a;
	ul res=0;
	cin>>a;
	while(a)
	{
		bool fl=1;
		for(int i=1;i<8;i++)
		{
			if(!check(a,i))
			{
				fl=0;
				break;
			}
		}
		if(fl) res+=a;

		cin>>a;
	}
	cout<<res<<endl;
}
