#include<iostream>
#include<vector>
using namespace std;

int main()
{
	bool pr[1000000]={0};
pr[0]=pr[1]=1;
	int a[100000];
	for(int i=2;i<1000;i++)
	{
		if(!pr[i])
		{
			for(int j=i*i;j<1000000;j+=i)
				pr[j]=1;
		}
	}
	int j=0;
	for(int i=2;i<1000000;i++)
	{
		if(!pr[i]) a[j++] = i;
	}

	vector <vector <int> >fac(1000000);
	
	for(int i=2;i<1000000;i++)
	{
		int k=i, tm =0;
		while(k)
		{
			if(!pr[k]) {fac[i].push_back(k); k=0;}
			else
			if(k<a[tm]) k=0;
			else if( k!=0 && k%a[tm]==0)
			{	fac[i].push_back(a[tm]);
				while(k!=0 && k%a[tm]==0)
				{
					k/=a[tm];
				}
			}	
			tm++;
		}
	}
	int yr;
	for(int i=2;i<1000000-4;i++)
	{
		if(fac[i].size()==4 && fac[i+1].size()==4&& fac[i+2].size()==4 &&   fac[i+3].size()==4)
{	cout<<i<<": "<<(yr=fac[i].size())<<endl;
	cout<<"Factors are: ";	for(int h=0;h<yr;h++)
		cout<<fac[i][h]<<" ";
	cout<<i+1<<": "<<(yr=fac[i+1].size())<<endl;
	cout<<"Factors are: ";	for(int h=0;h<yr;h++)
		cout<<fac[i+1][h]<<" ";
	cout<<i+2<<": "<<(yr=fac[i+2].size())<<endl;
	cout<<"Factors are: ";	for(int h=0;h<yr;h++)
		cout<<fac[i+2][h]<<" ";
	cout<<i+3<<": "<<(yr=fac[i+3].size())<<endl;
	cout<<"Factors are: ";	for(int h=0;h<yr;h++)
		cout<<fac[i+3][h]<<" ";
	cout<<endl;
}

	}	
}
