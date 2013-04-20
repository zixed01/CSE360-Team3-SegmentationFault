#include "Control.h"

Control::Control() {
}

Control::~Control() {
}

void Control::logout(SessionData tempdata){
    //reset session data and return in order to return to login screen
}

void Control::view(SessionData tempdata){
  //overwrite function
}

string Control::getScreenName(){
    return screenName;
}

