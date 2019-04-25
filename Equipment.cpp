#include "Equipment.h"
#include <iostream>
using namespace std;

Equipment::Equipment()
{
  day = 0;
  month = 0;
  minute = 0;
  hour = 0;
  status = 0;
  equipID = 0;
  ticNum = 0;
  totalHours = 0;
  part = 0;
}

void Equipment::setDate()
{
	int D;
	int M;
	int Y;
  day = D;
  month = M;
  year = Y;

  cout<<"Enter Date:";
  cin>> day >> month >> year;
}

/*void Equipment::setTime(int min, int h)
{
  minute = min;
  hour = h;
}
*/

void Equipment::setTicket( )
{
  int st;
  int id;
  int tick;
  status = st;
  equipID = id;
  ticNum = tick;

  cout<<"Enter ticket status: 1)pending 2)uncompleted 3)completed" << endl;
  cin>>status;
  cout<<"Enter equipment id:";
  cin>>equipID;
  cout<<"Enter ticket number:";
  cin>>ticNum;
}

Equipment::setTotalHours(int h){
    totalHours = h;
}

Equipment::setPart(int p){
    part = p;
}

int Equipment::getDate() {return day; return month; return year;}

//int Equipment::getTime() {return minute; return hour;}

int Equipment::getTicket() {return status; return equipID; return ticNum;}

int Equipment::getTotalHours() {return totalHours;}

int Equipment::getPart() {return part;}
