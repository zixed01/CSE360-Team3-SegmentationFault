/* 
 * File:   Patient.cpp
 * Author: Steven Lowder
 * 
 * Created on March 30, 2013, 6:51 PM
 */

#include "Patient.h"
#include <iostream>

Patient::Patient(int patientID = 0) 
{
	if(patientID != 0)
	{
		//pull information from database using
		//the patientID and assign all
		//private variables to the ones from the database
		//ex: firstName = (name from database)
	}
	else
	{
		//do nothing. The save patient function will
		//take care of filling out the data for a 
		//new patient using the set methods
	}

}


Patient::~Patient() 
{

}

//if viewtype = null, then infoView
//if viewtype = search, then searchView
//if viewtype = add, then addView
PassThrough Patient::view(PassThrough tempData)
{
	if((tempData.viewType).compare("add") == 0)
	{
		addView(tempData);
	}
	else if((tempData.viewType).compare("search") == 0)
	{
		searchView(tempData);
	}
	else
	{
		infoView(tempData);
	}

}

//print out patient info in editable text boxes
//save button calls savePatient
//PERMISSION CHECK on tempData.user
////if patient, don't make non-contact info editable
////if employee, can edit all info
//PERMISSION CHECK on TABS
////if patient, don't show comments tab
////if employee show all tabs
PassThrough Patient::infoView(PassThrough tempData)
{
    //patient info screen pops up
	//the tabs displayed depend upon the user viewing the info
	string person = (tempData.user).getType();
	if(person.compare("employee") == 0)
	{
		//display all tabs, including the comments
		//allow all info to be editable
	}
	else //in the else case, the type of user is "patient"
	{
		//don't display the comments tab
		//only contact info is editable
		//phone number, address/city/state/zip
	}

	//when the save button is hit:
	savePatient(tempData, /*string list from database,*/ IDNumber);
}

//print out search info box and buttons
//search calls searchResults(), don't update prevView / prevViewType
//GoBack returns tempData with nextView = prevView / viewType = prevViewType;
PassThrough Patient::searchView(PassThrough tempData)
{
	string newFirst;
	string newLast;
	string newPhone;
	int newID;
	"Enter in one more of the following fields\n";
	cout<<"Patient First Name\n";
	cin>>newFirst;
	cout<<"Patient Last Name\n";
	cin>>newLast;
	cout<<"Patient Phone Number\n";
	cin>>newPhone;
	cout<<"Patien ID Number\n";
	cin>>newID;
	//if search is pushed:
	searchResults(tempData, newFirst, newLast, newPhone, newID);
	//if Go Back is pushed:
	(tempData.nextView) = (tempData.prevView);
	(tempData.viewType) = (tempData.prevViewType);
	view(tempData);
	
}

//print out info boxes, prefilled if paramList != null and buttons
//submit call addPatient
//cancel will go to previous screen
PassThrough Patient::addView(PassThrough tempData, string * newParamList = NULL)
{
	


	string * paramList = new string[11];

	//the first time this is called, the paramList is NULL
	if(newParamList == NULL)
	{
	//take all the inputs from the boxes
		for(int i = 0; i++; i<11)
			cin>>paramList[i];
	}
	else //they didn't enter in all required fields
	{
		cout<<"Please fill in the required field(s)";
		for(int i = 0; i++; i<11)
		{
			//fill in the fields that have already been entered
			if(newParamList[i].size() == 0)
				cin>>paramList[i];
		}
	}
	
	//if sumbit is pushed:
	addPatient(tempData, paramList);


	//if cancel is pushed:
	(tempData.nextView) = (tempData.prevView);
	(tempData.viewType) = (tempData.prevViewType);
	view(tempData);

}

//search patients based on paramList and print out list
PassThrough Patient::searchResults(PassThrough tempData, string first, string last, string phone, int ID)
{
	//search through database, comparing each category that is not NULL
	//if a match is found for non-null categories, add the patient to a new list
	//at the end, display the list of patients 
	//Ex: Only know first name is Bob, so list all Bob's in the database
}

//addPatient will call savePatient
//if bool = true, call view, viewtype = null, and tempData.patient = patient just added
//if bool = false, show message for invalid fields.
PassThrough Patient::addPatient(PassThrough tempData, string * paramList)
{
  bool valid;
  for(int i = 0; i++; i<9)
  {
	  if(paramList[i].size() == 0)
	  {
		  valid = false;
		  //set textbox of paramList[i] to red
	  }
  }
  //if any of the fields are invlaid, call the addView again
  //to have them re-enter the information
  if(valid == false)
  {
	addView(tempData, paramList);
  }
  else //otherwise, save the patient
  {	  
	  savePatient(tempData, paramList, 0);
	  (tempData.viewType).clear();//set viewType to NULL
	  view(tempData);
  }

}

//check if fields are valid
//create new if patientID = 0
//if valid, save and return true, else false
bool Patient::savePatient(PassThrough tempData, string * paramList, int patientID = 0)
{
	if(patientID == 0)
	{
		Patient * newPatient = new Patient(0);
		newPatient->firstName = paramList[0];
		newPatient->lastName = paramList[1];
		newPatient->address = paramList[2];
		newPatient->city = paramList[3];
		newPatient->state = paramList[4];
		newPatient->zipCode = paramList[5];
		newPatient->phoneNumber = paramList[6];
	}
	//save the patient to the database
	return true;
}




