#include <iostream>
using namespace std;
#define l unsigned long long



int main() {
	
	l M=10000000000,r=1;
	for(l i=1;i<2610153;i++)
	{
		r*=8;
		r%=M;
	}
	r*=56866;
	r++;
	r%=M;
	cout<<r;
}