//Person.cpp
#include <iostream>
#include"Person.h"
using namespace std;

Person::Person(){


fname="";
lname="";

};

Person::setName(){

 cout<<"Enter first name"<<endl;
 cin>>firstn;
 cout<<"Enter last name"<<endl;
 cin>>lastn;
};

Person::getName(){

string firstn;
string lastn;

firstn=fname;
lastn=lname;

};
