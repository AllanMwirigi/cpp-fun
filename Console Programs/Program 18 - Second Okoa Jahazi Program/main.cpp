#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int P,A,T;
    cout<<"How long (in months)has your line been in use?"<<endl;
    cin>>P;

    if (P<6){
        cout<<"You're line must have been in use for at least 6 months for you to access this service."<<endl;
    }
    else{
        cout<<"Please enter your last top up amount:"<<endl;
        cin>>T;

        if(T==10){
            cout<<"Enter the amount that you would want to Okoa (only  Sh.10 is applicable here)"<<endl;
            cin>>A;
        }
        if(T==20){
            cout<<"Enter the amount that you would want to Okoa between:\n  Sh.10\n  Sh.20"<<endl;
            cin>>A;
        }
        if(T==50){
            cout<<"Enter the amount that you would want to Okoa between:\n  Sh.10\n  Sh.20\n  Sh.50"<<endl;
            cin>>A;
        }
        if(T==100){
            cout<<"Enter the amount that you would want to Okoa between:\n  Sh.10\n  Sh.20\n  Sh.50\n  Sh.100"<<endl;
            cin>>A;
        }
        if(T==250){
            cout<<"Enter the amount that you would want to Okoa between:\n  Sh.10\n  Sh.20\n  Sh.50\n  Sh.100\n  Sh.250"<<endl;
            cin>>A;
        }
        if(T==500){
            cout<<"Enter the amount that you would want to Okoa between:\n  Sh.10\n  Sh.20\n  Sh.50\n  Sh.100\n  Sh.250\n  Sh.500"<<endl;
            cin>>A;
        }

        switch (A){
        case 10:
            cout<<"Your request has been processed.\nYou have received Ksh."<<(A-(0.1*A))<<".\nKsh."<<(0.1*A)<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<A<<endl;
            break;
        case 20:
            cout<<"Your request has been processed.\nYou have received Ksh."<<(A-(0.1*A))<<".\nKsh."<<(0.1*A)<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<A<<endl;
            break;
        case 50:
            cout<<"Your request has been processed.\nYou have received Ksh."<<(A-(0.1*A))<<".\nKsh."<<(0.1*A)<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<A<<endl;
            break;
        case 100:
            cout<<"Your request has been processed.\nYou have received Ksh."<<(A-(0.1*A))<<".\nKsh."<<(0.1*A)<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<A<<endl;
            break;
        case 250:
            cout<<"Your request has been processed.\nYou have received Ksh."<<(A-(0.1*A))<<".\nKsh."<<(0.1*A)<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<A<<endl;
            break;
        case 500:
            cout<<"Your request has been processed.\nYou have received Ksh."<<(A-(0.1*A))<<".\nKsh."<<(0.1*A)<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<A<<endl;
            break;
        default:
            cout<<"Not applicable for this service."<<endl;
        }
    }
    return 0;
}
