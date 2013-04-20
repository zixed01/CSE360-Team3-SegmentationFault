#ifndef USERDATA_H
#define	USERDATA_H

#include "Data.h"

class UserData : public Data{
public:
    UserData();
    UserData(const UserData& orig);
    virtual ~UserData();
private:

};

#endif	/* USERDATA_H */

