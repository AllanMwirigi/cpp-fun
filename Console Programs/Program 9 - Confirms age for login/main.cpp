#include <iostream>

using namespace std;

int main()
{
    int A,PS;
    string FN,LN,Response;

    cout<<"Welcome to the site.\nPlease enter your age:"<<endl;
    cin>>A;

    if(A>=18){
        cout<<"Please login."<<endl;
        cout<<"Enter your first name:"<<endl;
        cin>>FN;
        cout<<"Enter your second name:"<<endl;
        cin>>LN;
        cout<<"Enter your password:"<<endl;
        cin>>PS;
        cout<<"Welcome"<<endl;
    }
    else{
        cout<<"You must be at least 18 years to access this site.\nWould you like to go to a child site?(Enter Yes or No):"<<endl;
        cin>>Response;

        if(Response=="Yes"){
            cout<<"Choose from among the following sites:\n1.Computer programming for youngsters\n2.How to prepare for exams in school\n3.Quick guide to expert playing of the piano\n4.View more on next page.";
        }
        else{
            cout<<"Exit site.";
        }
    }
    return 0;
}
