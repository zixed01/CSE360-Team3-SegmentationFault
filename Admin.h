#ifndef ADMIN_H
#define	ADMIN_H

#include "Data.h"
#include <ctime>
#include <string>
using namespace std;

struct forgotPass{
    time_t date;
    User user;
    forgotPass * next;
};

class Admin : public Data{
public:
    Admin();
    virtual ~Admin();

    //if viewType = "edit", then editUser
    //if viewType = "search", then searchUser
    //if viewTupe = "add", then addUser
    //if viewType is null, show forgot passwords
    //get forgot password requests
    //print out list and ui and buttons
    //all buttons call user functions and will return a 2 in PassThrough
    PassThrough view(PassThrough tempData);

    //get list of all people who have requested password reset
    forgotPass * forgotPassList();

    //remove user from forgotPassword list
    void removeForgotPassword(User user);

    //print out all input fields for user
    //clicking save calls save user
    //clicking cancel goes back to main admin screen
    PassThrough editUser(PassThrough tempData, User user);

    //print out input fields
    //search calls searchResults with paramList
    //cancel returns to Admin main screen
    PassThrough searchUsers(PassThrough tempData);

    //checks if paramList is valid
    //pulls all users that match and prints results
    //clicking on name calls editUser
    //cancel returns to admin main
    //searchagain call searchUsers
    PassThrough searchResults(PassThrough tempData, string * paramList);

    //prints out input fields
    //clicking save calls editUser
    //clicking cancel goes back to main admin screen
    PassThrough addUser(PassThrough tempData);

    //check if paramList is valid
    //edit user if userID !=0, else add new
    //save and return true if valid
    bool saveUser(string * paramList, int userID = 0);
private:

};

#endif	/* ADMIN_H */

