#include<iostream>

using namespace std;

int main()
{
	int n,a[1001];
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];

	int f=0,l=n-1,score1=0,score2=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			if(a[f]>a[l])
			{	score1+=a[f];
				f++;
			}
			else
			{
				score1+=a[l];l--;
			}
		}
		else
		{
				if(a[f]>a[l])
			{	score2+=a[f];
				f++;
			}
			else
			{
				score2+=a[l];l--;
			}

		}
	}
	cout<<score1<<" "<<score2<<endl;
return 0;
}
