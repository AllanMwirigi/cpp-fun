#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Addition
{
public:
    void singleDigits()
    {
        int Response;
        char ch;
        do{
     srand(time(0));
    static int F=(1+rand()%9);
    srand(time(0));
    static int S=(9-rand()%8);
    int answA=F+S;
        cout<<"What is "<<F<<" plus "<<S<<endl;
        cin>>Response;

        while(Response!=answA)
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==answA)
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";
          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');
    }
};
class Subtraction:public Addition
{
public:

    void singleDigits()
    {
        int answA=F-S;
    }

};

int main()
{
    Subtraction obj1;
    cout<<"Enter the kind of arithmetic you would like to undertake today:"<<endl
        <<"Enter   A for addition"<<endl
        <<"\tS for subtraction"<<endl
        <<"\tM for multiplication"<<endl
        <<"\tD for division"<<endl;
        char K;
        cin>>K;

        if(K=='S')
        {
            obj1.singleDigits();
        }
    return 0;
}
