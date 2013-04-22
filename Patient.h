#ifndef PATIENT_H
#define	PATIENT_H


#include "Control.h"
#include "PtntData.h"

class Patient : public Control {
public:
    //on instantiate if patientID != 0, then fill private fields
    Patient(int patientID = 0);
    virtual ~Patient();

    //viewtype = null, then infoView
    //viewtype = search, then searchView
    //viewtype = add, then addView
    void view(SessionData tempData);

    //print out patient info in editable text boxes
    //save button calls savePatient
    //PERMISSION CHECK on tempData.user
    ////if patient, don't make non-contact info editable
    ////if employee, can edit all info
    //PERMISSION CHECK on TABS
    ////if patient, don't show comments tab
    ////if employee show all tabs
    void infoView(SessionData tempData);

    //print out search info box and buttons
    //search calls searchResults(), don't update prevView / prevViewType
    //GoBack returns tempData with nextView = prevView / viewType = prevViewType;
    void searchView(SessionData tempData);

    //print out info boxes, prefilled if paramList != null and buttons
    //submit call addPatient
    //cancel will go to previous screen
    void addView(SessionData tempData, string * paramList = NULL);

    //search patients based on paramList and print out list
    void searchResults(SessionData tempData, string first, string last, string phone, int ID);

    //addPatient will call savePatient
    //if bool = true, call view, viewtype = null, and tempData.patient = patient just added
    //if bool = false, show message for invalid fields.
    void addPatient(SessionData tempData, string * paramList);

    //check if fields are valid
    //create new if patientID = 0
    //if valid, save and return true, else false
    bool savePatient(SessionData tempData, string * paramList, int patientID = 0);

	


private:
	PtntData * patientData;



};

#endif	/* PATIENT_H */

