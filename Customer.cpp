//Customer.cpp
//This will serve as the implementation file for Customer
#include <iostream>
#include "Customer.h"
#include"Person.h"
using namespace std;

Customer::Customer(){
equipment = 0; 
CustID = "";

};

/*void Customer::setEquip(int equipID){
  equipment = equipID;
 
 
};
*/
  string Customer::setCustID(){
  string id;
  CustID = id;
  cout<<"Enter customer ID:";
  cin>>CustID;

};



int Customer::getEquip(){return equipment;};
string Customer::getID(){return CustID;};
