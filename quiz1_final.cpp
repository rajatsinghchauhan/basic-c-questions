#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>

using namespace std;

class quiz{

    string answer;
    public:
    string question;
    string op1,op2,op3;

    quiz(){
        answer="no_answer";
        question= "no_question";
        op1= "op1";
        op2= "op2";
        op3="op3";
    }
    void addques();
    void display();
    string ans();
};

void quiz::addques()
{
   cout<<"\n Thank-you  "<<endl;

   cout<<"\n Enter the question "<<endl;
   cin>>question;
   cin.ignore();

   cout<<"\n Enter the option 1"<<endl;
   cin>>op1;
   cin.ignore();

   cout<<"\n Enter the option 2"<<endl;
   cin>>op2;
   cin.ignore();

   cout<<"\n Enter the option 3"<<endl;
   cin>>op3;
   cin.ignore();

   cout<<"\n Enter the correct option"<<endl;
   cin>>answer;
   cin.ignore();


}

void quiz::display(){

    cout<<"\n Question- "<<endl;
    cout<<question<<endl;
    cout<<"\n Option 1 is  "<<op1<<endl;
    cout<<"\n Option 2 is  "<<op2<<endl;
    cout<<"\n Option 3 is  "<<op3<<endl;


}

string quiz::ans(){

    return answer;
}


int main(){

fstream myfile;
quiz obj;
int choice,play;
string cans;

cout<<"\n Please choose between the given choices "<<endl;
cout<<"\n 1. ADD QUESTION"<<endl;
cout<<"\n 2. PLAY QUIZ"<<endl;
cin>>choice;

if(choice==1){

    myfile.open("quiz.txt", ios::app);

    while (choice==1)
    {
    obj.addques();
    myfile.write((char *) & obj, sizeof(obj));
    cout<<"\n QUESTION ADDED SUCCESFULLY "<<endl;

    cout<<"\n Please ENTER 1 if you want to continue adding questions else enter any other number "<<endl;
    cin>>choice;

    }

    myfile.close();
    myfile.open("quiz.txt", ios::in);
    myfile.seekg(0);
    while ( myfile.read((char *) & obj, sizeof(obj)))
    {
        //myfile.read((char *) & obj, sizeof(obj));
        obj.display();
    }
    myfile.close();

}

if(choice==2)
{
    cout<<"\n Lets play the quiz "<<endl;
    myfile.open("quiz.txt",ios::in);
    myfile.seekg(0);
    while(myfile.read((char *) & obj, sizeof(obj)))
    {
        obj.display();
        cout<<"\n Enter your correct option "<<endl;
        cin>>cans;
        if(cans==obj.ans())
        cout<<"\n Your Answer is correct"<<endl;
        else
        cout<<"\n Your answer is incorrect "<<endl;

        cout<<"\n Do you want to continue playing Quiz if yes enter 1 else enter any number "<<endl;
        cin>>play;

        if(play!=1)
        break;
    }
    cout<<"\n Quiz is over";

    myfile.close();
}

    return 0;
}