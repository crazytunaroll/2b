//Technician.cpp
#include <iostream>
#include "Technician.h"
using namespace std;

Technician::Technician(){

ID=0;
level=0;
status = 0;

}


void Technician::setName(string firstn, string lastn){
 fname = firstn;
 lname = lastn;
}

void Technician::setID(int techID){
	ID = techID;
}


void Technician::setLvl(int Level){
	level = Level;
}

void Technician::setStatus(int stat){
    status = stat;
}

string Technician::getName() const {return fname; return lname;}
int Technician::getID(){return ID;}
int Technician::getLvl(){return level;}
int Technician::getStatus(){return status;}
