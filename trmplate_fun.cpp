#include<iostream>
using namespace std;

// i was getting error when using max.. because is function iostream standard library..changed it to maxx 
template<typename T>
T maxx( T a, T b){
    return (a>b)? a:b;

}


int main(){ 
    int a=3,b=7;
    cout<<maxx(a,b)<<endl;
    cout<<maxx<char>('a','d')<<endl;

    return 0;
}


