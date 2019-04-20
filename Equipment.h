
#include <string>
#ifndef EQUIPMENT_H
#define EQUIPMENT_H
class Equipment
{
  public:
    Equipment();
    void setDate();
    void setTicket();
   // void setTime(int min, int h);
    int getDate();
    int getTime();
    int getTicket();

  private:
    int minute;
    int day;
    int month;
    int year;
    int hour;
    int status;
    int equipID;
    int ticNum;
};
#endif
