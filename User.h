#ifndef USER_H
#define	USER_H

#include <string>
using namespace std;

class User{
public:
    //on instantiate, if userID != fill private fields
    User(int userID);
    virtual ~User();

protected:
    string name;
    string type;
private:
    //ALL OTHER USER FIELDS GO HERE
};

#endif	/* USER_H */

