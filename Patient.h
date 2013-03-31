#ifndef PATIENT_H
#define	PATIENT_H

#include "User.h"

class Patient : public User, public Data {
public:
    //on instantiate if patientID != 0, then fill private fields
    Patient(int patientID = 0);
    virtual ~Patient();

    //viewtype = null, then infoView
    //viewtype = search, then searchView
    //viewtype = add, then addView
    PassThrough view(PassThrough tempData);

    //print out patient info in editable text boxes
    //save button calls savePatient
    //PERMISSION CHECK on tempData.user
    ////if patient, don't make non-contact info editable
    ////if employee, can edit all info
    //PERMISSION CHECK on TABS
    ////if patient, don't show comments tab
    ////if employee show all tabs
    PassThrough infoView(PassThrough tempData);

    //print out search info box and buttons
    //search calls searchResults(), don't update prevView / prevViewType
    //GoBack returns tempData with nextView = prevView / viewType = prevViewType;
    PassThrough searchView(PassThrough tempData);

    //print out info boxes, prefilled if paramList != null and buttons
    //submit call addPatient
    //cancel will go to previous screen
    PassThrough addView(PassThrough tempData, string * paramList = NULL);

    //search patients based on paramList and print out list
    PassThrough searchResults(PassThrough tempData, string * paramList);

    //addPatient will call savePatient
    //if bool = true, call view, viewtype = null, and tempData.patient = patient just added
    //if bool = false, show message for invalid fields.
    PassThrough addPatient(PassThrough tempData, string * paramList);

    //check if fields are valid
    //create new if patientID = 0
    //if valid, save and return true, else false
    bool savePatient(PassThrough tempData, string * paramList, int patientID = 0);

private:
    string viewtype;
    string message;
    //DETERMINE DATA THAT GOES HERE
};

#endif	/* PATIENT_H */

