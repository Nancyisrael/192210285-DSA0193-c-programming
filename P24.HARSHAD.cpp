#include<iostream>
using namespace std;
int main()
{
	int n=4991,sum=0;
	int k=n;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	if(k%sum==0)
	cout<<k<<" is a Harshd Number"<<endl;
	else
	cout<<k<<" is not a Harshd Number"<<endl;
}
