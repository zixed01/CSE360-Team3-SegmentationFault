#include "PtntData.h"

PtntData::PtntData(int ID) 
{
	if(ID != 0)
	{
		//IDNumber = (database query);
		//firstName = (database query);
		//lastName = (database query);
		//phoneNumber = (database query);
		//email = (database query);
		//address = (database query);
		//city = (database query);
		//state = (database query);
		//zipcode = (database query);
		//insurace = (database query);
		//policyNum = (database query);
	}

}

PtntData::PtntData(const PtntData& orig) {
}

PtntData::~PtntData() {
}
void PtntData::setID(int ID)
{
	//database = ID;
}
void PtntData::setFirst(string first)
{
	//database = first;
}
void PtntData::setLast(string last)
{
	//database = last;
}
void PtntData::setPhone(string phone)
{
	//database = phone;
}
void PtntData::setEmail(string email)
{
	//database = email;
}
void PtntData::setAddress(string address)
{
	//database = address;
}
void PtntData::setCity(string city)
{
	//database = city;
}
void PtntData::setState(string state)
{
	//database = state;
}
void PtntData::setZip (string zip)
{
	//database = zip;
}
void PtntData::setInsurance(string newInsurance)
{
	//database = newInsurance;
}
void PtntData::setPolicy(string newPolicy)
{
	//database = newPolicy
}


