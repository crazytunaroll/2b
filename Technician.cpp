//Technician.cpp
#include <iostream>
#include "Technician.h"
#include"Person.h"
using namespace std;

Technician::Technician(){


first name = "";
last name = "";
ID=0;
level=0;

};


Technician::setName(){
	
	cout << "What is the technician's first name? \n" << endl;
	cin >> firstname;
	
	cout << "What is the tehnician's last name? \n" << endl;
	cin >> lastname;
	
}

Technician::getName(){
	
	string firstname;
	string lastname;
	
	firstname = first name;
	lastname = last name;

	
}

Technician::setID(){
	
	cout << "What is the technician's ID level? \n" << endl;
	cin >> ID;


};

Technician::getID(){
	
	int ID;

};

Technician::setLvl(){
	
	cout << "What is the technician's level? \n";
	cin >> Level;


};

Technician::getLvl(){

	int level;

};
