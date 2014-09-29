#include<iostream>

using namespace std;

#define ul unsigned long long int

int main()
{
	
	ul a[]={0,9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999,99999999999,999999999999,9999999999999,99999999999999,999999999999999,9999999999999999,99999999999999999};

	ul w,m,k,mm;
	cin>>w>>m>>k;
	int ln=1;
	mm = m;
	while(mm/10)
	{
		ln++;
		mm/=10;
	}
	ul req = ln*k;
	ul res = 0,tmp;
	while(w>=req)
	{
		tmp = a[ln]-m+1;
		if(ln*tmp*k <=w)
		{
			res += tmp;
			w -= ln*tmp*k;
			m = a[ln] +1;	
			ln++;
		}
		else
		{
			res+= w/(ln*k);
			w =0;
			m = a[ln] +1;	
		}
		req = ln*k;
	}
		cout<<res<<endl;

	
return 0;
}
