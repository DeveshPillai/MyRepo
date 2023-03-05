#include<iostream>
using namespace std;

//user define data type
class Hero{

    int Health;

    public:
    string name;


//get is used to access private outside the class
    int getHealth(){
       return Health;
    }
    //set is used to give value to that data member which is private
    
    void setHealth(int p){
        Health =p;
    }

    };

int main(){


   //STATIC ALLOCATION
    Hero h1;
    h1.setHealth(23);
   cout<<"hero power level is "<<h1.getHealth()<<endl;
    
    //DYNAMIC ALLOCATION
    Hero *h2 = new Hero;

    (*h2).setHealth(29);
    (*h2).name="flash";
     cout<<(*h2).getHealth()<<endl;
     cout<<(*h2).name<<endl;

    //other way to assign value in dynamic operator

    h2->setHealth(31);
    h2->name="harry";
   cout<<h2->getHealth()<<endl;
   cout<<h2->name;


    h1.name;
}