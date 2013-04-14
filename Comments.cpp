/* 
 * File:   Comments.cpp
 * Author: Steven Lowder
 * 
 * Created on March 30, 2013, 8:42 PM
 */

#include "Comments.h"

Comments::Comments()
{
	
}

Comments::Comments(const Comments& orig)
{

}

Comments::~Comments()
{

}

//call getComments(tempData.Patient)
SessionData Comments::view(SessionData tempData)
{
	commentData*  commentList = getComments(tempData.patient);

	//display GUI with message lists

	return tempData;
}

//gets list of comments for patient
commentData * Comments::getComments(User patient)
{
	//database call for getting comments for chosen day and patient
	
	commentData * comments;

	comments= ; //Database query to retreive comments associated with specific patient	

	return comments;
}

//print out gui and input fields
//save will call save comment and call this->view
//cancel will go to previous screen
SessionData Comments::addComment(SessionData tempdata)
{
	SessionData tempData;
	//print gui for add comment screen
	string *comment;
	//save inputted comment into "*comment"


	
	if (saveComment(tempData, comment)==true)
	{
		return tempData;
	}

	return tempData;

}

//return false is any parameters are invalid
bool Comments::saveComment(SessionData tempdata, string *param)
{
	commentData*  commentList = getComments(tempData.patient);

	//parse commentList until gets to last element
	commentList->next=comment;

}

//currentDate = newDate
void Comments::changeDate(SessionData tempData, time_t newDate)
{

}