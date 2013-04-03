#ifndef DATA_H
#define	DATA_H

#include "User.h"
#include <string>
#include <ctime>
using namespace std;

//whenever you pass this through always set previous view info
struct PassThrough{
    int nextView;
    int prevView;
    User user;
    User patient;
    string viewType;
    string prevViewType;
    time_t apptTime;
};

class Data {
public:
    Data();
    virtual ~Data();
    /*Develop structure type*/
    PassThrough view(PassThrough tempdata);
    string getScreenName();
    void logout(PassThrough tempData);

private:
protected:
    string screenName;

};

#endif	/* DATA_H */

