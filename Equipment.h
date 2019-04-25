#include <string>
#ifndef EQUIPMENT_H
#define EQUIPMENT_H
class Equipment
{
  public:
    Equipment();
    void setDate(int);
    void setTicket(int);
    void setStatus(int);
    void setTotalHours(int);
    void setPart(int);
   // void setTime(int min, int h);
    int getDate();
    int getTime();
    int getTicket();
    int getStatus();
    int getTotalHours();
    int getPart();

  private:
    int minute;
    int day;
    int month;
    int year;
    int hour;
    int status;
    int equipID;
    int ticNum;
    int totalHours;
    int part;
};

#endif
