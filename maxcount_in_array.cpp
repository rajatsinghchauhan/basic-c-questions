#include<iostream>
using namespace std;

int main()
{
    int n,c=1,element,temp=1;
    cout<<"\n enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"\n fill the array"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
            temp++;

            }
            
        }
      if (temp>c)
      {
          element=arr[i];
          c=temp;
      }
        temp=1;
    }
    
    cout<<"\n Max occuring element in array is "<<element<<endl;
    cout<<"\n it occurs "<<c<<" times"<<endl;

    return 0;

}