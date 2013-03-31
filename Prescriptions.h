#ifndef PRESCRIPTIONS_H
#define	PRESCRIPTIONS_H

#include "Data.h"

using namespace std;
struct presData{
    //Prescription info goes here
    presData * next;
};
class Prescriptions : public Data{
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
    PassThrough view(PassThrough tempData);

    //gets list of prescriptions for patient
    presData * getPrescription(User patient);

    //print out gui and input fields
    //save will call save prescription and call this->view
    //cancel will go to previous screen
    PassThrough addPrescription(PassThrough tempdata);

    //Print out fields prefilled with data fields
    //save will call save prescription and go previous screen
    //cancel will go to previous screen
    PassThrough editPrescription(PassThrough tempdata, presData data);
    
    //if prescriptionID = 0 then add new prescription
    //else edit prescription
    //return false is any parameters are invalid
    bool savePrescription(PassThrough tempdata, string * paramList, int prescriptionID = 0);
private:

};

#endif	/* PRESCRIPTIONS_H */

