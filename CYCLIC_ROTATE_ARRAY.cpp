#include<iostream>

using namespace std;

void addarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    cin>>arr[i];
}
void cycarray(int arr[],int n)
{
    int x;
    x=arr[n-1];
    for(int i=1;i<n;i++)
    arr[n-i]=arr[n-i-1];

    arr[0]=x;


//output
    for(int i=0; i<n;i++)
    cout<<arr[i]<<"   ";
    cout<<endl;
}

int main()
{
 //  Following are steps. 
//1) Store last element in a variable say x. 
//2) Shift all elements one position ahead. 
//3) Replace first element of array with x.


    int x, n;

    cout<<"\n enter the size of array "<<endl;
    cin>>n;

    int arr[n];

    cout<<"\n enter the values in array"<<endl;
    addarray(arr,n);

    cout<<"\n position of array after one clockwise cyclic movement"<<endl;
    cycarray(arr,n);
    


    return 0;
}