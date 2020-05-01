//Instantiating multiple objects of the GradeBook class and using the GradeBook constructors to specify the course name
// and course instructor when each GradeBook object is created
#include <iostream>
#include "GradeBook.h"  //include definition of class GradeBook
using namespace std;

int main()
{
  //create four GradeBook objects
  GradeBook gradeBook1("CS101 Introduction to C++ Programming","Benjamin Momanyi");
  GradeBook gradeBook2("CS102 Data Structures in C++","Calvin Kimathi");

  //display initial value of courseName for each GradeBook object
  cout<<"GradeBook1 created for course: "<<gradeBook1.getCourseName()
      <<"\n\nGradeBook2 created for course:"<<gradeBook2.getCourseName()
      <<endl<<endl;

   string course;
  cout<<"Please enter name of course: ";
  getline(cin,course);

  if(course=="CS101 Introduction to C++ Programming"){
    cout<<"\n"<<gradeBook1.displayMessage()<<endl;
    cout<<gradeBook1.instructorMessage()<<endl;
  }
  if(course=="CS102 Data Structures in C++"){
    cout<<"\n"<<gradeBook2.displayMessage()<<endl;
    cout<<gradeBook2.instructorMessage()<<endl;
  }
  if(course!="CS101 Introduction to C++ Programming"&&course!="CS102 Data Structures in C++"){
    cout<<"Invalid Entry! Not Recognized!"<<endl;
  }
}
