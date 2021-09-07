#include<iostream>
using namespace std;

int main()
{

    int i,j,n;

    cout<<"\n enter the size of pirymaid "<<endl;
    cin>>n;

    for(i=0;i<n;i++)
   { for ( j = 0; j<(i+1); j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
    return 0;
}