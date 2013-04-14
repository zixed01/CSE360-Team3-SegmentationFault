#ifndef CONTROLLER_H
#define	CONTROLLER_H

#include "Boundary.h"
#include "User.h"

class Controller {
public:
    Controller();
    int runProgram();
    virtual ~Controller();
private:
    Boundary current;
    User user;
    User patient;
    SessionData tempData;
};

#endif	/* CONTROLLER_H */

