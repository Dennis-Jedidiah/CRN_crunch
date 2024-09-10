#include "CourseObject.h"

void CourseObject::printObject()
{
  cout << "course Name: " << this->course_name << endl;
  cout << "Start date: " << this->d_start << endl;
  cout << "End date: " << this->d_end << endl;
  cout << "Day: " << this->day << endl;
  cout << "Start time: " << this->t_start << endl;
  cout << "End time: " << this->t_end << endl;
  cout << "Location: " << this->location << endl;
  cout << "Instructor: " << this->instructor << endl;
  cout << "CRN: " << this->crn << endl;
}

CourseObject::CourseObject(/* args */)
{
}

CourseObject::~CourseObject()
{
}