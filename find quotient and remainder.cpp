#include<iostream>
using namespace std;

int main()
{
	int divisor, num, q,r;
	
	cout<<"\n enter number you want to divide";
	cin>>num;
	cout<<"\n enter the divisor";
	cin>>divisor;
	r= num%divisor;
	q= num/divisor;
	
	cout<<"\n quotient and remainder respectively are"<<q<<"  "<<r;
	
	return 0;
}
