#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   int num,n1,counter=0,d,sum=0;
   cout<<"\n enter the number ";
   cin>>num;

   n1=num;
   while (n1!=0)
   {
       n1=n1/10;
       counter++;

   }
    n1=num;
   while (num!=0)
   {
       d=num%10;
       num=num/10;
       sum=sum+pow(d,counter);

   }
   
   if(sum==n1)
   cout<<"\n it is an armstrong number "<<n1;
   else
   cout<<"\n it isnt a armstrong number "<<n1;

    return 0;
}