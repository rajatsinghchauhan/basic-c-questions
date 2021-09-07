#include<iostream>

using namespace std;
#include<vector>

int main(){
    

    vector <int> vec;

    for( int i = 0; i <= 30; i++)
    {
        vec.push_back(i);
       // cout<<"\n values are "<<vec[i]<<endl;
    }
    
   auto start= vec.begin();

   auto endd= vec.end();

   cout<<"\n     ";
   cout<<*start<<endl;
   endd=endd-1;
   cout<<"\n   "<<*endd<<endl;

   auto rbeg=vec.rbegin();
   rbeg=rbeg+1;

   cout<<"\n "<<*rbeg<<endl;

   auto rend=vec.rend();

   rend=rend-1;

   cout<<"\n "<<*rend<<endl;


   cout<<"\n size  "<<vec.size()<<endl;
   cout<<"\n capacity  "<<vec.capacity()<<endl;
   cout<<"\n max size "<<vec.max_size()<<endl;

   cout<<"\n element at 4th position "<<vec[4]<<endl;

   cout<<"\n element at 3rd position "<<vec.at(3)<<endl;

   // you can use = operator and it can directly copy the whole vector 
   //v1=v2
   // now v1 is basically v2 with all the properties.
   
   vector <int> v1;
   v1.assign(5, 20);

   for(int i=0; i<v1.size();i++)
   cout<<" "<<v1[i];
  cout<<endl;
   int arr[]{1,3,5,7,9};
   v1.assign(arr, arr+4);

   for(int i=0;i<v1.size();i++)
   cout<<"  "<<v1.at(i);
   
  cout<<endl;
   v1.assign(v1.begin(), v1.begin() + 2);

   for(int i=0; i<v1.size();i++)
   cout<<"   "<<v1.at(i);

cout<<endl;
   v1.push_back(5);
   
   for(int i=0; i<v1.size();i++)
   cout<<"   "<<v1.at(i);

   cout<<endl;

   v1.pop_back();
    for(int i=0; i<v1.size();i++)
   cout<<"   "<<v1.at(i);

   cout<<endl;

   v1.insert(v1.begin()+1,21);

   v1.insert(v1.begin()+3,{10,20,30,40,50});

    for(int i=0; i<v1.size();i++)
   cout<<"   "<<v1.at(i);
//v1.clear() is used delete all the elements
v1.erase(v1.begin()+2);
cout<<endl;
    for(int i=0; i<v1.size();i++)
   cout<<"   "<<v1.at(i);

   auto x=v1.emplace(v1.begin()+3,2000);
  cout<<endl;
   for(int i=0; i<v1.size();i++)
   cout<<"   "<<v1.at(i);


    return 0;
}