#include<iostream>
using namespace std;
int main()
{
	int n=496,i,sum=0;
	int k=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==k)
cout<<n<<" is a perfect number"<<endl;
else
cout<<n<<" is not a perfect number"<<endl;
}
