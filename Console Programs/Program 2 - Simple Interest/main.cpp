#include <iostream>

using namespace std;

int main()
{
    int P,I,T,A;
    string FN,LN;
    cout<<"Please enter your first name:"<<endl;
    cin>>FN;
    cout<<"Please enter your last name:"<<endl;
    cin>>LN;
    cout<<"Please enter your age:"<<endl;
    cin>>A;

    if(A<18){
        cout<<"You are not eligible."<<endl;
    }
    else{
    cout<<"Please enter your principal amount deposited:"<<endl;
    cin>>P;
    cout<<"Please enter the period of time passed in years since deposit:"<<endl;
    cin>>T;

    I=(P*10*T)/100;     //the interest rate is 10%

    cout<<"The interest you have earned so far is:"<<I;
    }
    return 0;
}
