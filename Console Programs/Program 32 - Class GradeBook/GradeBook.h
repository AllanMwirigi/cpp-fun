#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
using namespace std;

class GradeBook
{
    public:
        GradeBook(string,string);
        void setCourseName(string);
        string getCourseName();
        void setCourseInstructor(string);
        string getCourseInstructor();
        string displayMessage();
        string instructorMessage();

    private:
        string courseName;
        string courseInstructor;
};

#endif // GRADEBOOK_H
