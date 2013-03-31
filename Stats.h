#ifndef STATS_H
#define	STATS_H

#include "Data.h"
#include <ctime>

using namespace std;

struct statData{
    time_t date;
    int data1;
    int data2;
    statData * next;
};

class Stats : public Data{
public:
    //instantiate stats, set default statType, currentMonth = thisMonth
    Stats();
    virtual ~Stats();

    //call getStats(tempData.patient)
    //print out graphic with list
    //PERMISSION CHECK on TABS
    ////if patient, don't show comments tab
    ////if employee show all tabs
    PassThrough view(PassThrough tempData);

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
    PassThrough addData(PassThrough tempData);

    //print out input elements
    //call insertGoal return
    //call this->view
    PassThrough addGoal(PassThrough tempData);

    //save data
    bool insertData(PassThrough tempData, string * paramList);

    //save goal
    bool insertGoal(PassThrough tempData, string * paramList);

private:
    string statType;
    time_t currentMonth;
};

#endif	/* STATS_H */

