#include<iostream>

using namespace std;

int main()
{
	int num1,num2,a,b;
	
	cout<<"\n enter two numbers \n";
	cin>>num1>>num2;
	a=num1;
	b=num2;
	
	while(num1!=num2)
	{
		if(num1>num2)
	         num1=num1-num2;
	    else
		     num2=num2-num1;    
	
	}
	a=a/num1;
	b=b/num1;
	cout<<"\n LCM is "<<a*b*num1;
	
	return 0;
}
