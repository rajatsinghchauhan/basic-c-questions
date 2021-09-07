#include<iostream>

using namespace std;

int main()
{
    int n,temp;
    cout<<"\n enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"\n fill the array"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i; j < n;j++)
        {
            if(arr[i]>arr[j])
            {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
        
    }

    cout<<"\n sorted array is"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\n enter the value of k to find k largest elements ";
    cin>>temp;
    for (int i = 0; i < temp; i++)
    {
        cout<<arr[n-i-1]<<endl;
    }
    
    

    return 0;
}