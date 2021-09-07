#include<iostream>
// making function of one class friend function of other
// friend fun ka main use ye hai ke wo private member acces kr lega
// pr jis object ke karega wo tumhhe khud pass krna padega
using namespace std;

  
class A;
class B{
int sno=20;

public:
void add(int x)
{ sno=x;}
void display()
{
    cout<<"\n values of various objects private member are "<<endl;
    cout<<sno<<endl;
    }
void multi(A &a);

};


class A{
int value=10;

public :
friend void B::multi(A &a);
void display()
{
    cout<<"\n value is "<<value;    
}
void add(int x){
    value=x;
}

};


void B::multi(A &a){

    cout<<"\n friend is called "<<endl;
    cout<<a.value<<endl;
    cout<<sno<<endl;
    cout<<a.value*sno;
}    

int main()
{
 A obj;
 B bobj;
 bobj.multi(obj);
    return 0;
}