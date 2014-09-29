#include <iostream>
using namespace std;
#define l unsigned long long
bool a[1000001]={1,1,0};

bool check(l n)
{
	l k=0;
	for(l j=1;k<n-1;j++)
	{
		k=j*j*2;
		if(n>k+1 && !a[n-k])
			return 1;
		
	}
	return 0;
}

int main() {
	
	for(l i=2;i<1000;i++)
	{
		if(!a[i])
		for(l j=i*i;j<1000000;j+=i)
			a[j]=1;
	}
	l i=9;
	for(i=9;i<100000000;i+=2)
	{
		if(i<1000000 && !a[i]) 
		{
			i+=2;
			continue;
		}
		if(!check(i)) break;	
	}
cout<<i;
	return 0;
}