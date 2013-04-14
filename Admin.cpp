#include "Admin.h"

Admin::Admin(){
}
virtual Admin::~Admin(){
}

//if viewType = "edit", then editUser
//if viewType = "search", then searchUser
//if viewTupe = "add", then addUser
//if viewType is null, show forgot passwords
//get forgot password requests
//print out list and ui and buttons
//all buttons call user functions and will return a 2 in PassThrough
SessionData Admin::view(SessionData tempData){

    if(tempData.viewType == "edit")
        return editUser(tempData, tempData.user);
    if(tempData.viewType == "search")
        return searchUsers(tempData);
    if(tempData.viewType == "add")
        return addUser(tempData);
    forgotPass * fpList = forgotPassList();

    //Display UI elements
    //return result of button logic
}

//get list of all people who have requested password reset
forgotPass * Admin::forgotPassList(){
    //hit database and get list of everyone who requested
    //password reset
    forgotPass * fpList = NULL;
    return fpList;
}

//remove user from forgotPassword list
SessionData Admin::removeForgotPassword(SessionData tempData, User user){
    //remove row in database matching user.userID
    return tempData;
}

//print out all input fields for user
//clicking save calls save user
//clicking cancel goes back to main admin screen
SessionData Admin::editUser(SessionData tempData, User user){
    //print out UI elements
    //attach functions to buttons
}

//print out input fields
//search calls searchResults with paramList
//cancel returns to Admin main screen
SessionData Admin::searchUsers(SessionData tempData){
    //print out input fields
    //attach functions to buttons
}

//checks if paramList is valid
//pulls all users that match and prints results
//clicking on name calls editUser
//cancel returns to admin main
//searchagain call searchUsers
SessionData Admin::searchResults(SessionData tempData, string paramList[]){
    int i = 0;
    while (i < paramList.sizeof()){
        //check paramList to ensure data is correct
    }
    //query database for matching rows
    //displays results
    //attach functions to buttons
}

//prints out input fields
//clicking save calls editUser
//clicking cancel goes back to main admin screen
SessionData Admin::addUser(SessionData tempData){
    //print out UI elements
    string * paramList;
    int newUserID = saveUser(paramList);
    if(newUserID){
        User newUser = new User();
        newUser = User.getUser(newUserID);
        return editUser(tempData, newUser);
    }
}

//check if paramList is valid
//edit user if userID !=0, else add new
//save and return true if valid
int Admin::saveUser(string * paramList, int userID = 0){
    int i = 0;
    while (i < paramList.sizeof()){
        //check paramList to ensure data is correct
    }

    if(userID == 0){
        //insert a new row in the database
        //return new userID if successful, else return 0;
    } else {
        //edit row = userID
        //if successful, return userID, else return 0;
    }
}

