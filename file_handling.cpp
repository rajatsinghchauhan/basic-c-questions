#include<iostream>

#include<fstream>
using namespace std;

int main()
{  string str;

   fstream myfile;
   myfile.open("rajat.txt",ios::out);

   if(myfile.is_open()){

       myfile<<" hi rajat....\n";
       myfile<<"welcome to my world of file";
       myfile.close();
   }
  
   myfile.open("rajat.txt", ios::app);
   if(myfile.is_open())
   {
        while (1)
        { cout<<"\n please enter what you want to add in file";
        getline(cin, str);
        if(str=="-1")
         break;
         myfile<<endl;
         myfile<<str<<endl;
        }
        
         
         myfile.close();
   }
    return 0;
}