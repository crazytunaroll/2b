//Techician.h
#include <iostream>
#include"Person.h"
using namespace std;

#ifndef TECHNICIAN_H
#define TECHNICIAN_H
class Technician:public Person{

public:
		Technician();
    void setName(string fname,string lname);
		virtual string getName() const;
		void setID(int techID);
		int getID();
		void setLvl(int Level);
		int getLvl();
	
private:
		int ID;
		int level;
    string fname;
    string lname;
};
#endif
