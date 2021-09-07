#include<iostream>

using namespace std;

int main()
{
	int num1, num2;
	
	cout<<"\n enter num 1 ";
	cin>>num1;
	cout<<"\n enter num 2 ";
	cin>>num2;
	
	int temp;
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"\n number after getting swapped"<<" num 1 "<<num1<<" num2 "<<num2;
	
	return 0;
}
