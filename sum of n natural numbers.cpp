#include<iostream>

using namespace std;

int main()
{
	int n, sum=0;
	cout<<"\n enter the value of n , upto which you want sum ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"\n sum is "<<sum;
	
	return 0;

}
