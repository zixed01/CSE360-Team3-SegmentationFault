#ifndef STATS_H
#define	STATS_H

#include "Control.h"
#include <ctime>

using namespace std;

struct statData{
    time_t date;
    int data1;
    int data2;
    statData * next;
};

class Stats : public Control{
public:
    //instantiate stats, set default statType, currentMonth = thisMonth
    Stats();
    virtual ~Stats();

    //call getStats(tempData.patient)
    //print out graphic with list
    //PERMISSION CHECK on TABS
    ////if patient, don't show comments tab
    ////if employee show all tabs
    SessionData view(SessionData tempData);

    //reads file and gets stats for statType and patient, returns list
    statData * getStats(User patient);

    //currentMonth = newMonth
    //call this->view
    void changeDate(time_t newMonth);

    //statType = newStatType
    //call this->view
    void changeStatType(string newStatType);

    //print out input elements
    //call insertData return
    //call this->view
    SessionData addData(SessionData tempData);

    //print out input elements
    //call insertGoal return
    //call this->view
    SessionData addGoal(SessionData tempData);

    //save data
    bool insertData(SessionData tempData, string * paramList);

    //save goal
    bool insertGoal(SessionData tempData, string * paramList);
    
    string monthconverter(int mon);

private:
    string statType;
    time_t currentMonth;
};

#endif	/* STATS_H */

