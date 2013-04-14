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

class Admin : public Boundary{
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
    SessionData view(SessionData tempData);

    //get list of all people who have requested password reset
    forgotPass * forgotPassList();

    //remove user from forgotPassword list
    SessionData removeForgotPassword(User user);

    //print out all input fields for user
    //clicking save calls save user
    //clicking cancel goes back to main admin screen
    SessionData editUser(SessionData tempData, User user);

    //print out input fields
    //search calls searchResults with paramList
    //cancel returns to Admin main screen
    SessionData searchUsers(SessionData tempData);

    //checks if paramList is valid
    //pulls all users that match and prints results
    //clicking on name calls editUser
    //cancel returns to admin main
    //searchagain call searchUsers
    SessionData searchResults(SessionData tempData, string paramList[]);

    //prints out input fields
    //clicking save calls editUser
    //clicking cancel goes back to main admin screen
    SessionData addUser(SessionData tempData);

    //check if paramList is valid
    //edit user if userID !=0, else add new
    //save and return true if valid
    bool saveUser(string * paramList, int userID = 0);
private:

};

#endif	/* ADMIN_H */

