#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <queue>
#include "Person.h"
#include "Technician.h"
#include "Customer.h"
#include "Equipment.h"

using namespace std;

int menu();
string addTicket();
string viewTicket();
string updateTicket();
string deleteTicket();
void incoRepairs();
void invoices();
void sysPause();
void exit();




int menu() {
	int choice;
		cout << "\n\n\t====================================================\n"
			 << "\t\t\t\t  Main Menu\n"
			 << "\t====================================================\n"
			 << "\t\t 1) Create ticket\n"
			 << "\t\t 2) View tickets\n"
			 << "\t\t 3) Update ticket\n"
			 << "\t\t 4) Delete Ticket\n"
			 << "\t\t 5) End of day reporting\n"
			 << "\t\t 6) Save and exit\n"
			 << "\t====================================================\n"
			 << " \n\t\t Please enter a selection: ";

		cin >> choice;
		return choice;
}

	int main()
	{
			int userInput;
			Customer C1;
			Technician T1;
			Equipment E1;
			queue <Customer> Custq;
			queue <Technician> Techq;
			queue <Equipment> Equipq;
			Customer myCustomer = Custq.front();
			Technician myTech = Techq.front();
			Equipment myEquip = Equipq.front();

	do
	{
		userInput = menu();
		switch(userInput)
			{
				case 1: //addTicket();
					C1.setName();
					C1.setCustID();
					Custq.push(C1);

					T1.setName();
					T1.setID();
					T1.setLvl();
					Techq.push(T1);

					 E1.setDate();
					 E1.setTicket();
					 Equipq.push(E1);

			break;
				case 2: //viewTicket();
					cout<<"Ticket Info"	<<endl;
					cout<<"-------------------------------------"<<endl;
					cout<<"Customer:"<<myCustomer.getName()<<endl;
					cout<<"Customer ID#:"<<myCustomer.getCustID()<<endl;
					cout<<"Technician:"<<myTech.getName()<<endl;
					cout<<"Technician ID#:"<<myTech.getID()<<endl;
					cout<<"Technician lvl:"<<myTech.getLvl()<<endl;
					cout<<"Ticket Made:"<<myEquip.getDate()<<endl;
					cout<<"Ticket Info:"<<myEquip.getTicket()<<endl;
			break;
				case 3: //updateTicket();
			break;
				case 4: //delete ticket();
			break;
				case 5: //End of day reporting

				    cout << "        End of Day Reporting           " << endl;
				    cout << "---------------------------------------" << endl;
				    cout << "1) Print invoices for completed repairs" << endl;
				    cout << "2) Print all incomplete repairs        " << endl;
				    cout << "3) Return to main menu                 " << endl;
				    cin >> reportChoice;
				    if(reportChoice == 1)
                    {
                        invoices();
                    }
                    else if(reportChoice == 2)
                    {
                        incoRepairs();
                    }

			break;
                case 6: exit();
			break;
				default: cout << "Please enter a valid choice \n";
			}
		}	while (userInput != 5);


	system("PAUSE");
	return 0;
}

void invoices(){
    if(E1.getStatus() == 3)
    {
        cout << "--------------Invoice---------------" << endl;
        cout << "Customer:       " << E1.getName << endl;
        cout << "Technician:     " << T1.getName << endl;
        cout << "Hours spent:    " << E1.getTotalHours << endl;
        cout << "Total cost:     ";
        if(T1.lvl == 1)
        {
            cout << E1.getTotalHours * 100 << endl;
        }
        else if(T1.lvl == 2)
        {
            cout << E1.getTotalHours * 250 << endl;
        }
        cout << endl;

        E1.setStatus(2);
    }
}

void incoRepairs(){
    cout << "Pending equipment with over five hours of labor:" << endl;
    if(E1.getStatus() == 1)
    {
        if(E1.getTotalHours > 5)
        {
            cout << "Flagged repair, over five hours spent" << endl;
        }
        cout << "Hours spent:           " << E1.getTotalHours << endl;
        cout << "ID of the part needed: " << E1.getPart << endl;
        cout << "Technicians:           " << T1.getID << endl;
    }

    cout << "incomplete equipment with over five hours of labor:" << endl;
    if(E1.getStatus() == 2)
    {
        if(E1.getTotalHours > 5)
        {
            cout << "Flagged repair, over five hours spent" << endl;
        }
        cout << "Hours spent:           " << E1.getTotalHours << endl;
        cout << "Technicians:           " << T1.getID << endl;
    }
}

/*string addTicket()
{


	fstream myfile;
myfile.open ("Info.txt", ios::app);
myfile << "\nTechnician name: " << name;
myfile << "\nTechnician ID: " << techID;
myfile << "\nTechnician level: " << techlvl;
myfile << "\nCustomer  name: " << customer;
myfile << "\nCustomer ID: " << CustID;
myfile << "\nTicket made: : " << Date;
myfile << "\nTicket info: " << Ticket << endl;
myfile.close();


system("PAUSE");
return string();

}

string viewTicket()
{

string line_;
	fstream myfile("Info.txt");
	if(myfile.is_open())
	{
		while(getline(myfile,line_))
		{
			cout<<line_<< '\n';
		}
		myfile.close();
	}
	else
		cout << "File does not exist" << '\n';
		cin.get();

	system("PAUSE");
	return string();

}

string updateTicket()
{
	string updateData()
{
    int k=0;
    string line;
    string find;
    string customer;
    double technician;

    while(k!=2){

        cout<<"Would you like to update a ticket? 1 for yes 2 for no"<<endl;

        cin>>k;

        if(k==1)
        {

            cout<<"What is the customer ID you would like to update? "<<endl;
            cin>>find;

            ifstream myfile; //for reading records
  			 myfile.open("Info.txt");

    			ofstream temp;
    			temp.open("temp.txt");
    			while (getline(myfile, line))
    {
      		if (line != find)
        		temp << line << endl;
    }

    cout<<"Enter the Customer ID: ";
            cin.ignore();
            getline(cin, custID);

            cout<<"Enter the Customer name: ";
            cin.ignore();
            getline(cin, name);

            cout<<"Enter the Technician: ";
            cin.ignore();
            getline(cin, techName);

            cout<<"Enter the Technician ID: ";
            cin>>TechID;


    myfile.close();
    temp.close();
    remove("Info.txt");
    rename("temp.txt", "Info.txt");

}

        else{
            cout << "Thank you";
        }

    return string();

}

string deleteTicket()
{

  if( remove( "Info.txt" ) != 0 )
    perror( "Error deleting file" );

  else
    puts( "File successfully deleted" );

  return string();

}

void exit()
{
	cout << "Thank you come again. \n";
}
*/
