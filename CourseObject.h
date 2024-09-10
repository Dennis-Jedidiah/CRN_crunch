#ifndef _CourseObject_h
#define _CourseObject_h
#include <iostream>
using namespace std;

class CourseObject
{
private:
public:
  string course_name;
  string d_start;
  string d_end;
  string day;
  string t_start;
  string t_end;
  string location;
  string instructor;
  string crn;
  CourseObject(/* args */);
  ~CourseObject();
  void printObject();
};

#endif