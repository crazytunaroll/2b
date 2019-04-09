//Techician.h
#include <iostream>
using namespace std;

#ifndef TECHNICIAN_H
#define TECHNICIAN_H
class Technician:public Person{

public:
		Technician();
		setID();
		getID();
		setLvl();
		getLvl();
	
private:
		int ID;
		int level;

};
#endif
