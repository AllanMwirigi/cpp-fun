#include <iostream>

using namespace std;

int main()
{
    long int CH,F,S,R1,R2,R3,R4,R5;
    char y='y';
    do{
    cout << "\n\nMENU:\n\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus\n" << endl;
    cout<<"Enter your choice: "<<endl;
    cin>>CH;
    cout<<"\nEnter your 2 numbers: "<<endl;
    cin>>F>> S;

    if(CH==1){
        R1=F+S;
        cout<<"\nResult: "<<endl;
        cout<<R1;
    }

    if(CH==2){
        R2=F-S;
        cout<<"\nResult: "<<endl;
        cout<<R2;
    }

    if(CH==3){
        R3=F*S;
        cout<<"\nResult: "<<endl;
        cout<<R3;
    }

    if(CH==4){
        R4=F/S;
        cout<<"\nResult: "<<endl;
        cout<<R4;
    }

    if(CH==5){
        R5=F%S;
        cout<<"\nResult: "<<endl;
        cout<<R5;
    }

    cout<<"\n\nTo Continue,enter y. To exit, enter e"<<endl;
    cin>>y;

    }while(y=='y');

    return 0;
}
