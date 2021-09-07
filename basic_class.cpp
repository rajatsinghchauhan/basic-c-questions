#include<iostream>

using namespace std;

//abstraction explain

class abstractfood
{
private:
    virtual void intake()=0;   
};




//food class
// food sign contract to abstract food to give user intake guideance
// intake is complex process but user get it in one click
class food : abstractfood
{
private:
    
    string taste;
    int rank;
    int calories;
protected:
    string name;

public:

    food( string Name, string Taste, int Rank, int Calorie);
    void detail();
    ~food();
    virtual void foodtype(){
        cout<<"\n  "<<name<<"  is a food to fill stomach";
    }
    void intake(){
        //complex logic to dicide intake but user need one click to get info
        //we provide interface thats what abstraction is ....giving basic info
        cout<<name<<"\n intake is    ";
        if(calories>300)
        cout<<"\n 2 times"<<endl;
        else
        cout<<"\n 3 times"<<endl;
    }
    
};

void food::detail()
{
  cout<<"\n food details "<<name<<"   "<<taste<<"  "<<rank<<"   "<<calories<<"  "<<endl;
}
food::food(string Name, string Taste, int Rank, int Calorie)
{
    name=Name;
    taste=Taste;
    rank=Rank;
    calories=Calorie;
}
food::~food()
{
}


// inheritance
//healthy food class
class healthy_food : public food
{
private:
   int healthScore;
public:
    healthy_food (string Name, string Taste, int Rank, int Calories, int Health_score);
    ~healthy_food ();
    void score()
    {
        cout<<"\n health score of  "<<name<<"  "<<healthScore<<endl;
    }
    void foodtype(){
        cout<<"\n  "<<name<<"  is a food to get healthy";
    }
};

healthy_food ::healthy_food (string Name, string Taste, int Rank, int Calories, int Health_score)
: food( Name, Taste,Rank, Calories)
{
 healthScore=Health_score;
}

healthy_food::~healthy_food ()
{
}


// unhealthy food class
class unhealthy_food : public food
{
private:
    int unhealthyScore;
public:
    unhealthy_food (string Name, string Taste, int Rank, int Calories, int Unhealthy_score);
    ~unhealthy_food ();
    void score()
    {
        cout<<"\n health score of  "<<name<<"  "<<unhealthyScore<<endl;
    }
    void foodtype(){
        cout<<"\n  "<<name<<"  is a food which is unhealthy";
    }
};

unhealthy_food ::unhealthy_food (string Name, string Taste, int Rank, int Calories, int Unhealth_score)
: food( Name, Taste,Rank, Calories)
{
    unhealthyScore=Unhealth_score;
}

unhealthy_food ::~unhealthy_food()
{
}






int main()
{
    food f1("pizaa","salty",4,540);

    f1.intake();

    healthy_food hf1("mangoo","sweet",7,300,8);
    unhealthy_food uf1("burger","spicy",5,478,4);

     f1.detail();

     hf1.detail();
     hf1.score();

     uf1.detail();
     uf1.score();

     hf1.intake();
     uf1.intake();

     f1.foodtype();
     hf1.foodtype();
     uf1.foodtype();
 
 cout<<"\n";

 //polymorphism- same function ko different forms me use krna
     food* p1=&hf1;
     food* p2=&uf1;

     p1->foodtype();
     p2->foodtype();

    return 0;
}