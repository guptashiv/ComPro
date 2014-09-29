#include<iostream>
#include<algorithm>

using  namespace std;

int main()
{
    int c,d,n,m,k;
    cin>>c>>d>>n>>m>>k;
    int p2=0,p1=0,p=0;
    int left= m*n-k;
    if(left<=0)cout<<0<<endl;
    else if(left<=n)cout<<min(c, d*left)<<endl;
    else {
//       p=c;
//       left-=n;
	
	if(double(c)/double(n) < d)
	{
	  p1 += (left+n)/n*c;
	  p2= left/n *c + d*((left%n));
	  p2 =min (p1,p2);
	}
	else
	{
	  p2 = d*left;
	}
       
      
      
      cout<<p2<<endl;
    }
    
}