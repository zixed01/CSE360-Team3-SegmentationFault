#ifndef SESSIONDATA_H
#define	SESSIONDATA_H

#include "User.h"
#include <string>
#include <ctime>

class SessionData {
private:
    int nextView;
    int prevView;
    User user;
    User patient;
    string viewType;
    string prevViewType;
    time_t apptTime;
public:
    SessionData();
    virtual ~SessionData();
    int getnextView();
    int getprevView();
    User getuser();
    User getpatient();
    string getviewType();
    string getprevViewType();
    time_t getapptTime();

    void setnextView(int next);
    void setprevView(int prev);
    void setuser(User u);
    void setpatient(User p);
    void setviewType(string vt);
    void setprevViewType(string pvt);
    void setapptTime(time_t at);
};

#endif	/* SESSIONDATA_H */

