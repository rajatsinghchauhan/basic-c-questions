#include<iostream>

using namespace std;

class A{
int value=0;
// class as a friend

public :
friend class B;
void display()
{
    cout<<"\n value is "<<value;
    
}
void add(int x){
    value=x;
}

friend void square(A a1);
};
// a global function declared above as a friend to class a

void square(A a1){

    cout<<"\n square is "<<a1.value*a1.value<<endl;
}

class B{
int sno;


A obj;
public:
void add(int x, int y)
{
     sno=x;
     obj.add(y);
}
void display()
{
    cout<<"\n values of various objects private member are "<<endl;
    cout<<sno<<endl;
    obj.display();
}
// as i am friend of class a , my function can access its private memeber
void letsee(A& obj4)
{
    cout<<obj4.value<<endl;
}

};
int main()
{

    /*A obj1;
    int i;
    cout<<"\n enter a value you want to add in class A value";
    cin>>i;
    obj1.add(i);
    obj1.display();
    square(obj1); */

    B bobj;
    A obj2;
    int x,y;
    cout<<"\n enter values please"<<endl;
    cin>>x>>y;
    bobj.add(x,y);

// calin letsee and passin obj2 to check if it  works
    bobj.letsee(obj2);





    return 0;
}