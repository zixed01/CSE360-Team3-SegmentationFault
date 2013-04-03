#include "Appointments.h"

//instantiate currentDate = today;
Appointments::Appointments(){
    //pull in dateclass to allow something like:
    //this->currentDate = today();
}
virtual Appointments::~Appointments(){
}

//print out ui elements and data
//if tempData.viewType = "add", call addApptView
//Get list of appointments of currentDate
PassThrough Appointments::view(PassThrough tempData){
    if(tempData.viewType = "add")
        return addApptView(tempData);
    Appt apptList[];
    apptList = getAppointments();

    //print out ui and assign functions to each appointment line
    //either addApptView or viewPatient if filled
}

//read file and return linked list of appointments
//that match current user
Appt* Appointments::getAppointments(){
    //pull all appointments that match, tempData.user.getdoctorID();
    int rowsize;
    Appt appList[] = new Appt[rowsize];
    return appList;
}

//return struct with 1 and Null
PassThrough Appointments::logout(PassThrough tempData){
    Data data = new Data();
    return data.logout(tempData);
}

//return 3, null, viewType = "add"
PassThrough Appointments::addNewPatient(PassThrough tempData){
    tempData.nextView = 3;
    tempData.viewType = "add";
    tempData.prevView = 4;
    return tempData;
}

//return 3 and Appt->patient
PassThrough Appointments::viewPatient(PassThrough tempData){
    tempData.nextView = 3;
    tempData.prevView = 4;
    tempData.patient = Appt.patient;
    return tempData;
}

//update private currentDate = newDate
//call this->view
PassThrough Appointments::changeDate(PassThrough tempData, time_t newDate){
    currentDate = newDate;
    return this->view(tempData);
}

//print ui elements and buttons
//Search for Patient button = return 3, null, viewtype = "search", openTime
//submit will addAppt with data
//GoBack will call this->view
PassThrough Appointments::addApptView(PassThrough tempData, time_t openTime){
    //print ui elements and attach functions
}

//add appointment with passthrough data
//call this view
PassThrough Appointments::addAppt(PassThrough tempData){
    //if unable to add to database
    //message = "unable to add appointment"
    //else
    //return tempData with view set to apptView
}

