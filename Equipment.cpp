#include "Equipment.h"

Equipment::Equipment()
{
  day = 0;
  month = 0;
  minute = 0;
  hour = 0;
  status = 0;
  equipID = 0;
  ticNum = 0;
}

void Equipment::setDate(int D, int M, int Y)
{
  day = D;
  month = M;
  year = Y;
}

void Equipment::setTime(int min, int h)
{
  minute = min;
  hour = h;
}

void Equipment::setTicket(int st, int id, int tick)
{
  status = st;
  equipID = id;
  ticNum = tick;
}

int Equipment::getDate() {return day; return month; return year;}

int Equipment::getTime() {return minute; return hour;}

int Equipment::getTicket() {return status; return equipID; return ticNum;}


