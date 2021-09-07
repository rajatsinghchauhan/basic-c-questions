#include<iostream>

using namespace std;

int main()
{
	char c;
	
	cout<<"\n enter the character ";
	cin>>c;
	
	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	  cout<<"\n character entered is a vowel ";
	  
	else
	  cout<<" \n character entered is a consonant ";
	  
	return 0;  
}
