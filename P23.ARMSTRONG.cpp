#include<iostream>
using namespace std;
int main()
{
	int n=371,sum=0,d;
	int k=n;
	while(n!=0)
	{
		d=n%10;
		sum+=(d*d*d);
		n=n/10;
	}
	if(sum==k)
	cout<<k<<" is an armsrong number "<<endl;
	else	
	cout<<k<<" is not an armsrong number "<<endl;
}
