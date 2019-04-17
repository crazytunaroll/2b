//Customer.cpp
//This will serve as the implementation file for Customer
#include <iostream>
#include "Customer.h"
#include"Person.h"
using namespace std;

Customer::Customer(){
equipment = 0; 
ID = "";

};

void Customer::setEquip(int equipID){
  equipment = equipID;

};

void Customer::setID(string id){
  ID = id;

};

void Person::setName(string firstn, string lastn){
 fname = firstn;
 lname = lastn;
};

string Person::getName(){return fname; return lname;};
int Customer::getEquip(){return equipment;};
string Customer::getID(){return ID;};
