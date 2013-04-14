#include "Login.h"
#include "Admin.h"

Login::Login() {
    screenName = "login";
}

Login::Login(const Login& orig) {
}

Login::~Login() {
}

    
//checks username and password is valid
//if valid determine home screen and return homescreen num and User object
//if invalid, set message to reason for invalid, and call view again
SessionData Login::submit(string username, string password)
{
	SessionData tempData;
	bool pass;			//boolean pass checks to see if login was successful
	
	do{										//performs do function until login is a success
		pass= _____findUser()_________;		//database query to find username, returns true if login is correct
	} while (pass==false);

	tempData.user=_____getUser()____;		//database query to get user

	return tempData;

}

//create Admin class and calls admin forgotpassword
//if successsful, change message to tell user it worked and call view
//if no username when button pressed, change message accordingly
SessionData Login::forgotPassword(string username)
{
	SessionData tempData;
		
	Admin *admin = new Admin();

	//parse through forgotPassList  to find username
	if	()//if username exists	//checks to see if username is in the list
	{
		tempData.user=____getUser()___;	//database query to get user
		tempData.nextView = 8; //admin view
		tempData.viewType = "NULL"; //forgot password view
		return tempData;
	}
	//return username not found

}

//Print out UI elements for login screen
SessionData Login::view(SessionData tempData)
{
	//prints GUI
	//has two fields: username and password
	//has two buttons: Submit, and "Forgot Password"

}