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
        for (int j = i+1; j < n;j++)
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
    

    for (int i = 0; i < n ; i++)
    {
      temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
      i++;
      if(n%2!=0)
      {
          n--;
      }
    }
     n++;
    cout<<"\n final waveform array is"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    

return 0;
}    