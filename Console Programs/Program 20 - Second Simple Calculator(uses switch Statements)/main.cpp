#include <iostream>

using namespace std;

int main()
{
    int CH,F,S,R1,R2,R3,R4,R5;
    char y='y';
    do{
    cout << "\n\nMENU:\n\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus\n" << endl;
    cout<<"Enter your choice: "<<endl;
    cin>>CH;
    cout<<"\nEnter your 2 numbers: "<<endl;
    cin>>F>> S;

    switch(CH){
        case 1:
        R1=F+S;
        cout<<"\nResult: "<<endl;
        cout<<R1;
        break;

        case 2:
        R2=F-S;
        cout<<"\nResult: "<<endl;
        cout<<R2;
        break;

        case 3:
        R3=F*S;
        cout<<"\nResult: "<<endl;
        cout<<R3;
        break;

        case 4:
        R4=F/S;
        cout<<"\nResult: "<<endl;
        cout<<R4;
        break;

        case 5:
        R5=F%S;
        cout<<"\nResult: "<<endl;
        cout<<R5;
        break;

        default:
            cout<<"Invalid entry!"<<endl;
    }

    cout<<"\n\nTo Continue,enter y. To exit, enter e"<<endl;
    cin>>y;

    }while(y=='y');

    return 0;
}
