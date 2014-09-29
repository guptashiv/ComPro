#include<iostream>

using namespace std;

bool a[100000000]={0};

long int rev(long int n)
{
	long int t=0;
	while(n)
	{
		t=t*10+n%10;
		n=n/10;
	}
return t;
}

bool util(long int n)
{

		if(n<10)return (!a[n]);
		
	else
		return(!a[n]&&util(n/10));

}

bool check(long int n)
{
	if(n<10)return (!a[n]);
	else
		if(util(n))
		{	bool r=1;
			while(!a[n])
			{
				n=rev(rev(n)/10);
			}
			return(!n);
		}
}


int main()
{

	a[0]=a[1]=1;
	long int res=0;
	for(int i=2;i<10000;i++)
	{
		if(!a[i])
		{
			for(long int j=i*i;j<100000000;j+=i)
				a[j]=1;
		}
	}

	for(long int i=11;i<100000000;i++)
	{
		if(!a[i])
		{	if(check(i))res+=i;
		}
	}	
	cout<<res<<endl;

return 0;
}
