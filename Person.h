//Person.h
#include <iostream>
using namespace std;

#ifndef PERSON_H
#define PERSON_H
class Person{


public:
			Person();
			setName(string,string);
			getName(string,string);
private:
			string fname;
			string lname;

};
#endif