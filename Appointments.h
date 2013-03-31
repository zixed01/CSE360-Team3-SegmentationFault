#ifndef APPOINTMENTS_H
#define	APPOINTMENTS_H

#include "Data.h"
#include "User.h"
#include <string>
#include <ctime>
using namespace std;

struct Appt{
    string time;
    User patient;
    Appt * next;
};
class Appointments : public Data{
public:
    //instantiate currentDate = today;
    Appointments();
    virtual ~Appointments();

    //print out ui elements and data
    //if tempData.viewType = "add", call addApptView
    //Get list of appointments of currentDate
    PassThrough view(PassThrough tempData);

    //read file and return linked list of appointments
    //that match current user
    Appt* getAppointments();

    //return struct with 1 and Null
    PassThrough logout();

    //return 3, null, viewType = "add"
    PassThrough addNewPatient();

    //return 3 and Appt->patient
    PassThrough viewPatient();

    //update private currentDate = newDate
    //call this->view
    void changeDate(time_t newDate);

    //print ui elements and buttons
    //Search for Patient button = return 3, null, viewtype = "search", openTime
    //submit will addAppt with data
    //GoBack will call this->view
    PassThrough addApptView(time_t openTime);

    //add appointment with passthrough data
    //call this view
    void addAppt(PassThrough tempData);

private:
    time_t currentDate;
};

#endif	/* APPOINTMENTS_H */

