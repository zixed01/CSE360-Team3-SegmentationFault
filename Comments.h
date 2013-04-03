#ifndef COMMENTS_H
#define	COMMENTS_H

#include "Data.h"
#include <string>
#include <ctime>
using namespace std;

struct commentData{
    string message;
    commentData * next;
};
class Comments {
public:
    //instantiate currentDate = today
    Comments();
    virtual ~Comments();

    //call getComments(tempData.Patient, currentDate)
	//print all UI and buttons
    PassThrough view(PassThrough tempData);

    //gets list of comments for patient
    commentData * getComments(User patient);

    //print out gui and input fields
    //save will call save comment and call this->view
    //cancel will go to previous screen
    PassThrough addComment(PassThrough tempdata);

    //return false is any parameters are invalid
    bool saveComment(PassThrough tempdata, string *param);

    //currentDate = newDate
    void changeDate(PassThrough tempData, time_t newDate);
private:
    time_t currentDate;
};

#endif	/* COMMENTS_H */

