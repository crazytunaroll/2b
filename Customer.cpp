//Customer.cpp
//This will serve as the implementation file for Customer
#include <iostream>
#include "Customer.h"
using namespace std;

Customer::Customer(){
equipment = 0; 
ID = 0;

};

void Customer::setEquip(int equipID){
  equipment = equipID;

};

void Customer::setCustID(int id){
  ID = id;

};


string Customer::getName() {return fname; return lname;};
int Customer::getEquip(){return equipment;}
