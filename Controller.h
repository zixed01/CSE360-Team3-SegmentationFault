#ifndef CONTROLLER_H
#define	CONTROLLER_H

#include "Control.h"
#include "SessionData.h"
#include "User.h"

class Controller {
public:
    Controller();
    int runProgram();
    virtual ~Controller();
private:
    Control current;
    SessionData session;
};

#endif	/* CONTROLLER_H */

