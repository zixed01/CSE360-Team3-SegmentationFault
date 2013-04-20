#ifndef LOGIN_H
#define	LOGIN_H

#include "Control.h"
#include "User.h"
#include <string>
using namespace std;

class Login : public Control{
public:
    Login();
    virtual ~Login();
    
    //checks username and password is valid
    //if valid determine home screen and return homescreen num and User object
    //if invalid, set message to reason for invalid, and call view again
    SessionData submit(string username, string password);

    //create Admin class and calls admin forgotpassword
    //if successsful, change message to tell user it worked and call view
    //if no username when button pressed, change message accordingly
    SessionData forgotPassword(string username);

    //Print out UI elements for login screen
    SessionData view(SessionData tempData);
private:
    string message;
    string username;
};

#endif	/* LOGIN_H */

