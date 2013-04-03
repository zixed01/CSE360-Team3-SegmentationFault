#include "User.h"

User::User(int userID = 0){
    if(userID != 0){
        this = getUser(userID);
    }
}

virtual User::~User(){
}

User User::getUser(int userID){
    //select from User table where userID = userID
    //create user object with data equal to pulled row
    //return user object
    User user = new User();
    return user;
}

int User::getUserID(){
    return userID;
}

string User::getType(){
    return type;
}

int User::getPatientID(){
    return patientID;
}

int User::getemployeeID(){
    return employeeID;
}

int User::getdoctorID(){
    return doctorID;
}

