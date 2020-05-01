#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int P,I,Y,A,T;
    string FN,LN;
    cout<<"Please enter your first name:"<<endl;
    cin>>FN;
    cout<<"Please enter your last name:"<<endl;
    cin>>LN;
    cout<<"Please enter your age:"<<endl;
    cin>>A;{

    if (A<18){
    cout<<"You are not eligible!";
    }
    else{
    cout<<"Please enter your principal amount deposited:"<<endl;
    cin>>P;
    cout<<"Please enter the period of time passed in years since deposit:"<<endl;
    cin>>Y;

    T=P*(1+(10/100))^(Y); //the interest rate is 10%
    I=T-P;

    cout<<"The interest you have earned so far is:"<<endl;
    cout<<I;
    }
    }
    return 0;
}
