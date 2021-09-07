/*#include<iostream>
using namespace std;
  
class Test
{
private:
  int x;
public:
  Test(int x = 0) { this->x = x; }
  void change(Test *t) { *this = *t; }
  void print() { cout << "x = " << x << endl; }
};
  
int main()
{
  Test obj(5);
  Test *ptr = new Test (10);
  obj.change(ptr);
  obj.print();
  return 0;
}


#include<iostream>
using namespace std;

class Test
{
private:
int x;
int y;
public:
Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
static void fun1() { cout << "Inside fun1()"; }
static void fun2() { cout << "Inside fun2()"; Test::fun1(); }
};

int main()
{
Test obj;
obj.fun2();
return 0;
}
*/

#include<iostream>
using namespace std;
  
class Test
{
private:
  int x;
  int y;
public:
  Test (int x = 0, int y = 0) { this->x = x; this->y = y; }
  Test setX(int a) { x = a; return *this; }
  Test setY(int b) { y = b; return *this; }
  void print() { cout << "x = " << x << " y = " << y << endl; }
};
  
int main()
{
  Test obj1;
  obj1.setY(10).setX(20);
  obj1.print();
  return 0;
}
