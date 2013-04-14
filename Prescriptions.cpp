/* 
 * File:   Prescriptions.cpp
 * Author: Steven Lowder
 * 
 * Created on March 30, 2013, 8:42 PM
 */

#include "Prescriptions.h"

	//Sets the root to the presData * to NULL
	Prescriptions::Prescriptions()
	{
		root = NULL;
	}


    Prescriptions::~Prescriptions()
	{
		//delete stuff in the database
	}

    //call getPrescriptions(tempData.Patient)
    //print out graphic with list
    //PERMISSION CHECK on TABS
    ////if patient, don't show comments tab
    ////if employee show all tabs
    //PERMISSION CHECK on editing
    ////if patient or user.type == nurse, don't allow to edit fields
    ////if user.type == doctor allow to edit fields
    SessionData Prescriptions::view(SessionData tempData)
	{
		presData * temp = getPrescription(tempData.patient);

		//Displays list of all the prescriptions belonging to that patient

		if(tempData.user.type == "Patient")
		{
			//do not display comments tab on the gui
		}
		else
		{
			//all tabs

		}

		if(tempData.user.type == "Nurse" || tempData.user.type == "Patient")
		{
				//Make all fields not editable/ do not display add button
		}
		else
		{
				//Display editable fields when click add or when editing the prescription
		}
	}

    //gets list of prescriptions for patient
    presData * Prescriptions::getPrescription(User patient)
	{
		//access the database to get the prescription info for the patient
		presData *temp;
		return temp;
	}

    //print out gui and input fields
    //save will call save prescription and call this->view
    //cancel will go to previous screen (not yet implemented)
    SessionData Prescriptions::addPrescription(SessionData tempdata) //Method for when the add prescription button is pressed
	{
		

		//When the save button is pressed
		string fields[6]; //Gets all of the fields input into  string array
		bool flag = savePrescription(tempdata, fields);
		
		if(flag == true)
		{
			tempdata.nextView = 6;
		}

		else
		{

		}


		//The cancel button is pressed then tempdata.nextView = tempdata.prevView the next is the current view

		return tempdata;

	}

    //Print out fields prefilled with data fields
    //save will call save prescription and go previous screen
    //cancel will go to previous screen
    SessionData Prescriptions::editPrescription(SessionData tempdata, presData data)
	{
		

		return tempdata;
	}
    
    //if prescriptionID = 0 then add new prescription
    //else edit prescription
    //return false is any parameters are invalid
    bool Prescriptions::savePrescription(SessionData tempdata, string paramList[], int prescriptionID)
	{
		presData *add = new presData;
		add->Doctor = tempdata.user.name;
		
		if(paramList[0] == "" || paramList[1] == "" || paramList[2] == "" || paramList[3] == "" || paramList[4] == "" || paramList[5] == "")
		{
			delete add;

			cout << "sorry one of the parameters is not correct" << endl; //In the GUI display

			return false;
		}

		add->ra = paramList[0];
		cout << "Precription #: " << add->ra << endl;

		add->name = paramList[1]; //Cin will later be resplaced with get text box info or the string will get text box info
		cout << "Name: " << add->name << endl;

		add->dose = paramList[2];
		cout << "Dose: " << add->dose << endl;

		add->instructions = paramList[3];
		cout << "Instructions: " << add->instructions << endl;
		add->refills = paramList[4];
		cout << "Refills: " << add->refills << endl;
		add->comments = paramList[5];
		cout << "Comments: " << add->comments << endl;
		add->next = NULL;
		presData *newRoot = root;

		if(newRoot == NULL)
		{
			newRoot = add;
		}

		else 
		{
			while(newRoot->next != NULL)
			{
				newRoot = newRoot->next;
			}

			newRoot->next = add;
		}

		//Stores the presciption data into the database

		return true;
	}
