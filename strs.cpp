#include<iostream>
#include<vector>
#include<algorithm>

int a[50004]={0};

using namespace std;

int main()
{
	int m;
	cin>>m;
	int ctr1=0,ctr2=0,tmp[100001];
	vector<int> up;
	vector<int > down;
	for(int i=0;i<m;i++)
	{
		cin>>tmp[i];
		if(a[tmp[i]]==0)
		{	
			a[tmp[i]]++;
			up.push_back(tmp[i]);
		}
		else if(a[tmp[i]]==1)
		{
			a[tmp[i]]++;
			down.push_back(tmp[i]);
		}
		
	}
	sort(up.begin(),up.end());
	sort(down.begin(),down.end());
	ctr1=up.size();
	ctr2=down.size();
	if(ctr2!=0)
	{if(down[ctr2-1]==up[ctr1-1])
	ctr2--;}
	int ctr=ctr1+ctr2;
	
	cout<<ctr<<endl;
	for(int i=0;i<ctr1;i++)
	cout<<up[i]<<" ";
	if(ctr2){
	for(int i=ctr2-1;i>-1;i--)
	cout<<down[i]<<" ";
	}
	cout<<endl;	
	return 0;
}
