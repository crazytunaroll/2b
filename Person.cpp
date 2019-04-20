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
 cin>>fname;
 cout<<"Enter last name"<<endl;
 cin>>lname;
};

Person::getName(string,string){

string firstn;
string lastn;
string fullname;

firstn=fname;
lastn=lname;

fullname = fname + " " +lname;
};
