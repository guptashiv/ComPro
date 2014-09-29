#include <iostream>
using namespace std;

int main() {
	int ln[1000]={1};
	int ld[1000]={2}, ds=1;
	int n[1000];
	int d[1000];
		
	int num, res=0;
	
	for(int i=2;i<1001;i++)
	{
		for(int i=0;i<ds;i++)
			{
				n[i]=ld[i];
		
			}
		
		
		int carry=0;
		for(int i=0;i<ds;i++)
		{
			
			num=(2*ld[i]+ln[i]+carry);
			
			if(num>9 ){
					d[i]=num%10;
					carry = num/10;
			}
			else
			{
				d[i]=num;
				carry=0;
			}
			if(i==ds-1 && carry)
			{
			 
			 d[ds]=carry;
			 carry=0;
			 ds++;
			 break;
			}
		
		}
		
		for(int i=0;i<ds;i++)
			{
				ln[i]=n[i];
				ld[i]=d[i];
			}
		
		carry=0;
		for(int i=0;i<ds;i++)
			carry = (n[i]+d[i]+carry)/10;
		
		if(carry)
			res++;
	}
	cout<<res;
	
	return 0;
}
