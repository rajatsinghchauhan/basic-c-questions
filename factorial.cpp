#include<iostream>

using namespace std;

int main()
{
	int n, product=1;
	cout<<"\n enter value of n for factorial ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		product= product*i;
	}
	
	cout<<"\n factorial of n is"<<product;
	
	return 0;
}
