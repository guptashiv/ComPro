#include<iostream>
#include<algorithm>
using namespace std;

#define ll long long int
#include<vector>
int main()
{
	vector<ll> a;
	vector<ll> b;
	int n;
	ll m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		a.push_back(m);
	}
	sort(a.begin(),a.end());
	ll res=0,ls=0,tmp,bh,lctr=0;
	if(n==1){cout<<-1<<endl;return 0;}
	if(n==2 && (a[1]-a[0])%2==0)
	{	ls=a[1]-a[0];
		
		cout<<3<<endl<<a[0]-ls<<" "<<(a[0]+a[1])/2<<" "<<a[1]+ls<<endl;
		return 0;
	}
			
	tmp=a[0];
	ls=a[1]-a[0];
	for(int i=1;i<n;i++)
	{
		if(ls!=a[i]-tmp)
		{lctr++;	
		if(ls==2*(a[i]-tmp))
		{
			res=1;
			b.push_back((a[i]+a[i-1])/2);
			
		}	
		else if(2*ls==(a[i]-tmp))
		{
			res=1;
		
			b.push_back((a[i]+tmp)/2);
		}
		else {lctr=100;break;}
		}
		
		tmp=a[i];
	}
	if(lctr==0)
		cout<<2<<endl<<a[0]-ls<<" "<<a[n-1]+ls<<endl;
	else if(lctr>1)
		cout<<0<<endl;
	else cout<<1<<endl<<b[0]<<endl;
	
	
return 0;
}
