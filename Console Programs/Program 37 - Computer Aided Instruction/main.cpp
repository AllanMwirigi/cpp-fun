#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


    int F,S;
    void AdditionS()
    {
        int Response;
        char ch;
        do{
     srand(time(0));
    int F=(1+rand()%9);
    srand(time(0));
    int S=(9-rand()%8);
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
     void SubtractionS()
    {
        char ch;
        do{
         srand(time(0));
    int F=(1+rand()%9);
    srand(time(0));
    int S=(9-rand()%8);

    if(F<S)
    {
        S=(F-rand()%(F-1));
    }
        cout<<"What is "<<F<<" minus "<<S<<endl;
         int answS=F-S;

        int Response;
        cin>>Response;

        while(Response!=answS)
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==answS)
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";
          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');
    }
     void MultiplicationS()
    {
        char ch;
        do{
         srand(time(0));
    int F=(1+rand()%9);
    srand(time(0));
    int S=(9-rand()%8);
        int answM=F*S;
        cout<<"What is "<<F<<" times "<<S<<endl;
        int Response;
        cin>>Response;

        while(Response!=answM)
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==answM)
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";
          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');
    }
     void DivisionS()
    {
        char ch;
        do{
         srand(time(0));
    int F=(1+rand()%9);
    srand(time(0));
    int S=(9-rand()%8);
        int answD=F/S;
        cout<<"What is "<<F<<" divided by "<<S<<endl;
        int Response;
        cin>>Response;

        while(Response!=answD)
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==answD)
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";
          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');
    }


    void AdditionD()
    {
        char ch;
        do{
        srand(time(0));
        int SS=(99-rand()%89);
        int FF=(10+rand()%89);
        srand(time(0));
        //int SS=(99-rand()%88);

        int answA=SS+FF;
        cout<<"What is "<<FF<<" plus "<<SS<<endl;
        int Response;
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
     void SubtractionD()
    {
         char ch;
        do{
         srand(time(0));
    int FF=(10+rand()%89);
    srand(time(0));
    int SS=(99-rand()%88);

     if(FF<SS)
    {
        SS=(FF-rand()%(FF-1));
    }

        int answS=FF-SS;
        cout<<"What is "<<FF<<" minus "<<SS<<endl;
        int Response;
        cin>>Response;

        while(Response!=answS)
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==answS)
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";
          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');
    }
     void MultiplicationD()
    {
        char ch;
        do{
         srand(time(0));
    int FF=(10+rand()%89);
    srand(time(0));
    int SS=(99-rand()%88);

        int answM=FF*SS;
        cout<<"What is "<<FF<<" times "<<SS<<endl;
        int Response;
        cin>>Response;

        while(Response!=answM)
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==answM)
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";
          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');
    }
     void DivisionD()
    {
         char ch;
        do{
         srand(time(0));
    int FF=(10+rand()%89);
    srand(time(0));
    int SS=(99-rand()%88);

        int answD=FF/SS;
        cout<<"What is "<<FF<<" divided by "<<SS<<endl;
        int Response;
        cin>>Response;

        while(Response!=answD)
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==answD)
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";
          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');
    }


    void AdditionT()
    {
         char ch;
        do{
         srand(time(0));
    int FFF=(100+rand()%899);
    srand(time(0));
    int SSS=(999-rand()%888);

        int answA=FFF+SSS;
        cout<<"What is "<<FFF<<" plus "<<SSS<<endl;
        int Response;
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
     void SubtractionT()
    {
        char ch;
        do{
         srand(time(0));
    int FFF=(100+rand()%999);
    srand(time(0));
    int SSS=(999-rand()%888);

        int answS=FFF-SSS;
        cout<<"What is "<<FFF<<" minus "<<SSS<<endl;
        int Response;
        cin>>Response;

        while(Response!=answS)
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==answS)
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";
          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');
    }
     void MultiplicationT()
    {
        char ch;
        do{
         srand(time(0));
    int FFF=(100+rand()%899);
    srand(time(0));
    int SSS=(999-rand()%888);

        int answM=FFF*SSS;
        cout<<"What is "<<FFF<<" times "<<SSS<<endl;
        int Response;
        cin>>Response;

        while(Response!=answM)
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==answM)
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";
          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');
    }
     void DivisionT()
    {
         char ch;
        do{
         srand(time(0));
    int FFF=(100+rand()%899);
    srand(time(0));
    int SSS=(999+rand()%888);

        int answD=FFF/SSS;
        cout<<"What is "<<FFF<<" divided by "<<SSS<<endl;
        int Response;
        cin>>Response;

        while(Response!=answD)
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==answD)
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";

          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');
    }

int main()
{
    cout<<"Welcome to the Computer Aided Instruction Program."<<endl
        <<"This program will help you to practice your skills in arithmetic"<<endl;

    cout<<"Enter the preferred difficulty:"<<endl
        <<"Enter   1 for single digit values"<<endl
        <<"\t2 for double digit values"<<endl
        <<"\t3 for three digit numbers"<<endl
        <<"\tand so on"<<endl;
      int D;
      cin>>D;
     switch (D)
    {
        case 1:
            cout<<"Enter the kind of arithmetic you would like to undertake today:"<<endl
        <<"Enter   A for addition"<<endl
        <<"\tS for subtraction"<<endl
        <<"\tM for multiplication"<<endl
        <<"\tD for division"<<endl;
        char K;
        cin>>K;

        switch (K)
        {
        case 'A':
        case 'a':
             AdditionS();
            break;
        case 'S':
        case 's':
            SubtractionS();
            break;
        case 'M':
        case 'm':
            MultiplicationS();
            break;
        case 'D':
        case 'd':
            DivisionS();
            break;
        default:
            cout<<"Invalid entry!"<<endl;
        }
        break;

        case 2:
        cout<<"Enter the kind of arithmetic you would like to undertake today:"<<endl
        <<"Enter   A for addition"<<endl
        <<"\tS for subtraction"<<endl
        <<"\tM for multiplication"<<endl
        <<"\tD for division"<<endl;
        cin>>K;

        switch (K)
        {
        case 'A':
        case 'a':
            AdditionD();
            break;
        case 'S':
        case 's':
            SubtractionD();
            break;
        case 'M':
        case 'm':
            MultiplicationD();
            break;
        case 'D':
        case 'd':
            DivisionD();
            break;
        default:
            cout<<"Invalid entry!"<<endl;
        }
        break;

         case 3:
            cout<<"Enter the kind of arithmetic you would like to undertake today:"<<endl
        <<"Enter   A for addition"<<endl
        <<"\tS for subtraction"<<endl
        <<"\tM for multiplication"<<endl
        <<"\tD for division"<<endl;
        cin>>K;

        switch (K)
        {
        case 'A':
        case 'a':
            AdditionT();
            break;
        case 'S':
        case 's':
            SubtractionT();
            break;
        case 'M':
        case 'm':
            MultiplicationT();
            break;
        case 'D':
        case 'd':
            DivisionT();
            break;
        default:
            cout<<"Invalid entry:"<<endl;
        }
        break;

        default:
            cout<<"Invalid entry!";
    }
}





