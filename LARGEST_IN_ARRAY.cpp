#include<iostream>

using namespace std;

int main()
{
     int n,maxi;
     cout<<"\n enter the size of array "<<endl;
     cin>>n;

     int arr[n];

     cout<<"\n enter elements in array "<<endl;

     for (int i = 0; i < n; i++)
     {
        cin>>arr[i];
     }
     maxi=arr[0];

     for(int i=1;i<n;i++)
     {
         if(maxi<arr[i])
         maxi=arr[i];
         else
         continue;

     }

     cout<<"\n largest element is "<<maxi;



    return 0;
}