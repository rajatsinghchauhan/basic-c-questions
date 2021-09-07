#include<iostream>

using namespace std;

int main()
{
 int arr[3][3]={ {23, 45, 67}, {10,20,30}, {36,56,78} };

 int (*ptr)[3]; 
 ptr=arr;
ptr++;
 cout<<"\n value stored is "<<**ptr<<"  "<<arr+1;


    return 0;
}