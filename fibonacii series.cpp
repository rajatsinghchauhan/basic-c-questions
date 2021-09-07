#include<iostream>

using namespace std;

int main()
{
	int n, sum=0,a=0,b=1;
	
	cout<<"\n upto which place you want fibonacii series ";
	cin>>n;
	
	if(n==1)
	 cout<<a<<"\n";
	else if( n==2)
	 cout<<a<<"\n "<<b;
	else
	  {
	  	cout<<a<<"\n"<<b;
	  	for(int i=3;i<=n;i++)
	  	{
	  		sum=a+b;
	  		cout<<"\n"<<sum;
	  		a=b;
	  		b=sum;
		  }
	   } 
	   return 0;
}
