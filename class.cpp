#include<iostream>
using namespace std;

//user define data type
class Hero{


//properties also called data members
//by default it will be private
    int powerLevel;

    public:
    int name;
};

int main(){


   //creating object h1 of data type hero
    Hero h1;


    //accessing properties using dot properties
    //you cant access the private part of class
    h1.powerLevel;


    //you can access the public one
    h1.name;
}