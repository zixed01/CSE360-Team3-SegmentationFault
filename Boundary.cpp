#include "Boundary.h"

Boundary::Boundary() {
}

Boundary::~Boundary() {
}

SessionData Boundary::logout(SessionData tempdata){
    //reset session data and return in order to return to login screen
}

SessionData Boundary::view(SessionData tempdata){
  //overwrite function
}

void Boundary::displayTabs();

string Boundary::getScreenName(){
    return screenName;
}

