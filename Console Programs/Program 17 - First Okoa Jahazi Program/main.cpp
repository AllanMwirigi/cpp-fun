#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int P,A;
    cout<<"How long (in months)has your line been in use?"<<endl;
    cin>>P;

    if (P<6){
        cout<<"You're line must have been in use for at least 6 months for you to access this service."<<endl;
    }
    else{
        cout<<"Please enter your last top up amount:"<<endl;
        cin>>A;

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
