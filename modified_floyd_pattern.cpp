#include<iostream>
using namespace std;

int main()
{
    int i,j,n,temp;
    cout<<"\n enter the floyd pyramid size "<<endl;
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        temp=i+1;
        for ( j = 0; j < i+1; j++)
        {
            cout<<temp;
            temp++;
        }
        cout<<endl;
    }
    
    return 0;
}