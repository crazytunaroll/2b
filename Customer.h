//Customer.h
#include <iostream>
#include "Person.h"
using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H
class Customer: public Person{

public:
		Customer();
		void setEquip(int equipID);
    void setCustID(int id);
    void setName(string fname,string lname);
		virtual string getName();
		int getEquip();
		string getID();
private:
	
		int equipment;
		int ID;
    string fname;
    string lname;


};
#endif
