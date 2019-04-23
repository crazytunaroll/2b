//Person.h
#include <iostream>
using namespace std;

#ifndef PERSON_H
#define PERSON_H
class Person{


public:
			Person();
			void setName(string fname,string lname);
			virtual string getName() const = 0;
protected:
			string fname;
			string lname;

};
#endif
