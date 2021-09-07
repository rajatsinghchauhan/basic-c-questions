#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    char x='A';

    cout<<"\n enter the prymiad size"<<endl;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < (i+1); j++)
        {
            cout<<x;
            x++;
        }
        x='A';
        cout<<endl;
        
    }
    

    return 0;
}