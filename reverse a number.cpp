#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n,i=1,div=10,x, sum=0;
	cout<<"\n Enter the number you want to reverse ";
	cin>>n;
	
	while(n/div!=0)
	{
		div=div*10;
		i++;
	}
	i--;
	for(int j=i; j>=0;j--)
	{
		x=n%10;
		n=n/10;
		sum=sum+(x*pow(10,j));
	}
	cout<<sum;
	
	return 0;
	
}
