#ifndef USER_H
#define	USER_H

#include <string>
using namespace std;

class User{
public:
    //on instantiate, if userID != fill private fields
    User(int userID = 0);
    virtual ~User();
    User getUser(int userID);
    int getUserID();
    string getType();
    int getPatientID();
    int getemployeeID();
    int getdoctorID();

protected:
    int patientID;
    int employeeID;
    int doctorID;
    string type;
    int userID;
private:
    string username;
    string password;
};

#endif	/* USER_H */

