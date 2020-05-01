#include <iostream>
#include "GradeBook.h"  //include definition of class GradeBook
using namespace std;


    GradeBook::GradeBook(string name,string instructor){  //constructor initializes courseName supplied as an argument
    setCourseName(name);                                 //call set function to initialize courseName
    setCourseInstructor(instructor);
    }

    //function to set the course name
    void GradeBook::setCourseName(string name){
    courseName=name;                    //store the course name in the object
    }
    //function to get the course name
    string GradeBook::getCourseName(){
    return courseName;      //return the object's course name
    }

    void GradeBook::setCourseInstructor(string instructor){
    courseInstructor=instructor;
    }

    string GradeBook::getCourseInstructor(){
    return courseInstructor;
    }

    string GradeBook::displayMessage(){
    return "Welcome to the grade book for: "+getCourseName();
    }
    string GradeBook::instructorMessage(){
     return "This course is presented by: "+getCourseInstructor();
    }

