#include<iostream>
//#include<string>
#include<fstream>
using namespace std;

int main()
{
    string str="heloo",st1="fuckkkkkk";
    char ch;
    int j;
    fstream myfile;
    
    cout<<"\n heloo enter the Para"<<endl;
    
   
   

    myfile.open("rajat.txt",ios::out);
    //cout<<s.max_size();
    while(1){
      getline(cin,str);
      if(str=="-1")
      break;

    for (int i = 0; i < str.length(); i++)
    {
        
        ch=str[i];
        j=ch;
        myfile<<j<<endl;
        
    }

      myfile<<st1<<endl;

    }

  if(myfile.is_open())
    myfile.close();


    cout<<str;
    
    return 0;
}