#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int generator(int D)
{

}
int generatorS1()
{
    srand(time(NULL));
    int F=1+rand()%9;
    return F;
}
int generatorS2()
{
    srand(time(NULL));
    int S=9-rand()%8;
    return S;
}
int generatorD1()
{
    srand(time(NULL));
    int F=10+rand()%89;
    return F;
}
int generatorD2()
{
    srand(time(NULL));
    int S=99-rand()%88;
    return S;
}
/*int generatorT1()
{
    srand(time(NULL));
    int F=100+rand()%899;
    return F;
}
int generatorT2()
{
    srand(time(NULL));
    int S=999-rand()%888;
    return S;
}*/


int arithmetic(int D, int O)
{
    switch (D)
    {
    case 1:
        switch (O)
        {
        case 'A':
        case 'a':
            {
            cout<<"What is "<<generatorS1()<<" plus "<<generatorS2();
            int answ=generatorS1()+generatorS2();
            return answ;}
            break;
        case 'S':
        case 's':{
            cout<<"What is "<<generatorS1()<<" minus "<<generatorS2();
            int answ=generatorS1()-generatorS2();
            return answ;}
            break;
        case 'M':
        case 'm':{
            cout<<"What is "<<generatorS1()<<" times "<<generatorS2();
            int answ=generatorS1()*generatorS2();
            return answ;}
            break;
        case 'D':
        case 'd':{
            cout<<"What is "<<generatorS1()<<" divide "<<generatorS2();
            int answ=generatorS1()/generatorS2();
            return answ;}
            break;
        default:
            cout<<"INVALID ENRTY!";

        }
        case 2:
            switch (O)
        {
        case 'A':
        case 'a':{
            cout<<"What is "<<generatorD1()<<" plus "<<generatorD2();
            int answ=generatorD1()+generatorD2();
            return answ;}
            break;
        case 'S':
        case 's':{
            cout<<"What is "<<generatorD1()<<" minus "<<generatorD2();
            int answ=generatorD1()-generatorD2();
            return answ;}
            break;
        case 'M':
        case 'm':{
            cout<<"What is "<<generatorD1()<<" times "<<generatorD2();
            int answ=generatorD1()*generatorD2();
            return answ;}
            break;
        case 'D':
        case 'd':{
            cout<<"What is "<<generatorD1()<<" divide "<<generatorD2();
            int answ=generatorD1()/generatorD2();
            return answ;}
            break;
        default:
            cout<<"INVALID ENRTY!";

    }
    }
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

      cout<<"Enter the kind of arithmetic you would like to undertake today:"<<endl
        <<"Enter   A for addition"<<endl
        <<"\tS for subtraction"<<endl
        <<"\tM for multiplication"<<endl
        <<"\tD for division"<<endl;
        char O;
        cin>>O;

        int Response;
        char ch;

        do{
        arithmetic(D, O);
        cin>>Response;
        while(Response!=arithmetic(D, O))
        {
            cout<<"Incorrect! Please try again"<<endl;
            cin>>Response;
        }
        if(Response==arithmetic(D, O))
        {
          cout<<"Correct! Good Work"<<endl;
          cout<<"Enter p to proceed or e to exit: ";
          cin>>ch;
        }
        }
        while(ch=='P'||ch=='p');

        return 0;

}
