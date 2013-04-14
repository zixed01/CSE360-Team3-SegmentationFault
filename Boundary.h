#ifndef BOUNDARY_H
#define	BOUNDARY_H

#include "User.h"
#include <string>
#include <ctime>
using namespace std;

//whenever you pass this through always set previous view info
struct SessionData{
    int nextView;
    int prevView;
    User user;
    User patient;
    string viewType;
    string prevViewType;
    time_t apptTime;
};

class Boundary {
public:
    Boundary();
    virtual ~Boundary();
    /*Develop structure type*/
    SessionData logout(SessionData tempdata);
    SessionData view(SessionData tempdata);
    void displayTabs();
    string getScreenName();

private:
protected:
    string screenName;

};

#endif	/* DATA_H */

