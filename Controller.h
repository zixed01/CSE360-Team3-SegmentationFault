#ifndef CONTROLLER_H
#define	CONTROLLER_H

#include "Data.h"
#include "User.h"

class Controller {
public:
    Controller();
    int runProgram();
    virtual ~Controller();
private:
    Data current;
    User user;
    User patient;
    PassThrough tempData;
};

#endif	/* CONTROLLER_H */

