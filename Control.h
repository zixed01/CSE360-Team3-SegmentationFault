#ifndef CONTROL_H
#define	CONTROL_H

#include "SessionData.h"
#include <string>
#include <ctime>
using namespace std;

class Control {
public:
    Control();
    virtual ~Control();
    void logout(SessionData & session);
    void view(SessionData & session);
    string getScreenName();

private:
protected:
    string screenName;

};

#endif	/* DATA_H */

