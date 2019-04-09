//Customer.h
#include <iostream>
#include "Person.h"
using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H
class Customer:public Person{

public:
		Customer();
		setEquip();
		getEquip();
		setID();
		getID();
private:
	
		int equipment;
		string ID;


};
#endif
