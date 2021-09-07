#include<iostream>

using namespace std;


void rever( int arr[], int startt, int endd)
{

    int temp;
  for(int i=startt;i<(startt+endd)/2;i++)
  {
    temp=arr[i];
    arr[i]=arr[endd-i-1];
    arr[endd-i-1]=temp;
  }
}

int main()
{
    int n,d;
    cout<<"\n enter the size of array"<<endl;
    cin>>n;
    cout<<"\n enter the values"<<endl;

    int a[n];
     for(int i=0; i<n;i++)
     cin>>a[i];
    cout<<"\n enter the value of d- basically till which point you want rotation"<<endl;
    cin>>d;
    rever(a, 0,d);
    rever(a,d, n);
    rever(a,0,n);

    cout<<"\n array after rotation "<<endl;
    for(int i=0; i<n;i++)
    cout<<a[i]<<"   ";




    return 0;
}