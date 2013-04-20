#ifndef APPOINTMENTS_H
#define	APPOINTMENTS_H

#include "Control.h"
#include "ApptData.h"
#include "User.h"
#include <string>
#include <ctime>
using namespace std;

struct Appt{
    string time;
    User patient;
    Appt * next;
};
class Appointments : public Control{
public:
    //instantiate currentDate = today;
    Appointments();
    virtual ~Appointments();

    //print out ui elements and data
    //if tempData.viewType = "add", call addApptView
    //Get list of appointments of currentDate
    SessionData view(SessionData tempData);

    //read file and return linked list of appointments
    //that match current user
    Appt* getAppointments();

    //return struct with 1 and Null
    SessionData logout();

    //return 3, null, viewType = "add"
    SessionData addNewPatient();

    //return 3 and Appt->patient
    SessionData viewPatient();

    //update private currentDate = newDate
    //call this->view
    SessionData changeDate(time_t newDate);

    //print ui elements and buttons
    //Search for Patient button = return 3, null, viewtype = "search", openTime
    //submit will addAppt with data
    //GoBack will call this->view
    SessionData addApptView(time_t openTime);

    //add appointment with passthrough data
    //call this view
    int addAppt(string paramList[]);

private:
    time_t currentDate;
    string message;
};

#endif	/* APPOINTMENTS_H */

