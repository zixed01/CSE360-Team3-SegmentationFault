#include "SessionData.h"

SessionData::SessionData() {
}

SessionData::~SessionData() {
}

int SessionData::getnextView(){return this->nextView;}
int SessionData::getprevView(){return this->prevView;}
User SessionData::getuser(){return this->user;}
User SessionData::getpatient(){return this->patient;}
string SessionData::getviewType(){return this->viewType;}
string SessionData::getprevViewType(){return this->prevViewType;}
time_t SessionData::getapptTime(){return this->apptTime;}

void SessionData::setnextView(int next) {nextView = next;}
void SessionData::setprevView(int prev){prevView = prev;}
void SessionData::setuser(User u){user = u;}
void SessionData::setpatient(User p){patient = p;}
void SessionData::setviewType(string vt){viewType = vt;}
void SessionData::setprevViewType(string pvt){prevViewType = pvt;}
void SessionData::setapptTime(time_t at){apptTime = at;}