#ifndef PRESCRIPTIONS_H
#define	PRESCRIPTIONS_H

#include "Boundary.h"
#include <iostream>

using namespace std;
struct presData{
    string ra;
	string name;
	string dose;
	string instructions;
	string refills;
	string Doctor;
	string comments;
    presData * next;
};
class Prescriptions : public Boundary{
public:
    Prescriptions();
    virtual ~Prescriptions();

    //call getPrescriptions(tempData.Patient)
    //print out graphic with list
    //PERMISSION CHECK on TABS
    ////if patient, don't show comments tab
    ////if employee show all tabs
    //PERMISSION CHECK on editing
    ////if patient or user.type == nurse, don't allow to edit fields
    ////if user.type == doctor allow to edit fields
    SessionData view(SessionData tempData);

    //gets list of prescriptions for patient
    presData * getPrescription(User patient);

    //print out gui and input fields
    //save will call save prescription and call this->view
    //cancel will go to previous screen
    SessionData addPrescription(SessionData tempdata);

    //Print out fields prefilled with data fields
    //save will call save prescription and go previous screen
    //cancel will go to previous screen
    SessionData editPrescription(SessionData tempdata, presData data);
    
    //if prescriptionID = 0 then add new prescription
    //else edit prescription
    //return false is any parameters are invalid
    bool savePrescription(SessionData tempdata, string paramList[], int prescriptionID = 0);
private:
	presData * root;
};

#endif	/* PRESCRIPTIONS_H */

