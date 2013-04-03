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
PassThrough Comments::view(PassThrough tempData)
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
PassThrough Comments::addComment(PassThrough tempdata)
{
	PassThrough tempData;
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
bool Comments::saveComment(PassThrough tempdata, string *param)
{
	commentData*  commentList = getComments(tempData.patient);

	//parse commentList until gets to last element
	commentList->next=comment;

}

//currentDate = newDate
void Comments::changeDate(PassThrough tempData, time_t newDate)
{

}