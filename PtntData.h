#ifndef PTNTDATA_H
#define	PTNTDATA_H

#include "Data.h"

class PtntData{
public:
    PtntData();
    virtual ~PtntData();
	//the set functions update the database
	void setID(int ID);
	void setFirst(string first);
	void setLast(string last);
	void setPhone(string phone);
	void setEmail(string email);
	void setAddress(string address);
	void setCity(string city);
	void setState(string state);
	void setZip (string zip);
	void setInsurance(string newInsurance);
	void setPolicy(string newPolicy);
	
private:
	int IDNumber;
	string firstName;
	string lastName;
	string phoneNumber;
	string email;
	string address;
	string city;
	string state;
	string zipCode;
	string insurance;
	string policyNum;

};

#endif	/* PTNTDATA_H */

