/* 
 * File:   Stats.cpp
 * Author: Steven Lowder
 * 
 * Created on March 30, 2013, 8:42 PM
 */

#include "Stats.h"
#include <ctime>s

Stats::Stats() {
    time_t temptime;
    time(&temptime);
    tm month = localtime(&temptime);
    int mon = month.tm_mon + 1;
    string mnth = monthconverter(mon);
        statData(temptime, 0, 0, 0);
	statType = "";
	currentMonth = mnth;//This may need to change depending on what datatype currentMonth is
}

Stats::Stats(const Stats& orig) {
}

Stats::~Stats() {
}


PassThrough Stats::view(PassThrough tempData){
    statData comp = getStats(tempData.patient);
    //GUI about the graph
    cout<<comp<<endl;
    if(/*user = patient*/){
        //Heres where GUI would go about not showing the comments tab
    }
    else{
        //Heres where GUI would go about showing comments tab
    }
   
}

statData * Stats::getStats(User patient){
    return patient.statData;
}

void Stats::changeDate(newMonth){
    currentMonth = newMonth;
    //GUI stuff to change date view
}

void Stats::changeStatType(string newStatType){
    statType = newStatType;
    //More GUI stuff to change stat type view
}

PassThrough Stats::addData(PassThrough tempData){
    //Print out input GUI
    bool okay = insertData(tempData, paramList);
    //Change GUI view to something
    return tempData;
}

PassThrough Stats::addGoal(PassThrough tempData){
    //Print out out GUI elements
    bool okay = insertGoal(tempData, paramList);
    //Change view
    return tempData;
}

bool Stats::insertData(PassThrough tempData, string * paramList){
    //add data into Database
    if(/*insert is successful*/){
        return true;
        }
    else{
        return false;
        }
}

bool Stats::insertGoal(PassThrough tempData, string * paramList){
    //add goalline into Database
    if(/*insert is successful*/){
        return true;
        }
    else{
        return false;
        }
}

string Stats::monthconverter(int mon){
    string value = "";
    if(mon == 1){
        value = "January";
    }
    else if (mon == 2){
        value = "February";
    }
    else if (mon == 3){
        value = "March";
    }    
    else if (mon == 4){
        value = "April";
    }    
     else if (mon == 5){
        value = "May";
    }     
    else if (mon == 6){
        value = "June";
    }  
    else if (mon == 7){
        value = "July";
    }   
    else if (mon == 8){
        value = "August";
    }      
    else if (mon == 9){
        value = "September";
    }  
    else if (mon == 10){
        value = "October";
    }
    else if (mon == 11){
        value = "November";
    }      
    else{
        value = "December";
    }   
}