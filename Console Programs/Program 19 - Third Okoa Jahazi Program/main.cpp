#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int P,T,O;
    cout<<"How long (in months)has your line been in use?"<<endl;
    cin>>P;

    if (P<6){
        cout<<"You're line must have been in use for at least 6 months for you to access this service."<<endl;
    }
    else{
        cout<<"Please enter your last top up amount:"<<endl;
        cin>>T;

        if(T==10){
            cout<<"Choose the option for the amount that you would want to Okoa:  1.Sh 10 (only  Sh.10 is applicable here)"<<endl;
            cin>>O;
        }
        if(T==20){
            cout<<"Choose the option for  the amount that you would want to Okoa between:\n  1.Sh.10\n  2.Sh.20"<<endl;
            cin>>O;
        }
        if(T==50){
            cout<<"Choose the option for the amount that you would want to Okoa between:\n  1.Sh.10\n  2.Sh.20\n  3.Sh.50"<<endl;
            cin>>O;
        }
        if(T==100){
            cout<<"Choose the option for the amount that you would want to Okoa between:\n  1.Sh.10\n  2.Sh.20\n  3.Sh.50\n  4.Sh.100"<<endl;
            cin>>O;
        }
        if(T==250){
            cout<<"Choose the option for the amount that you would want to Okoa between:\n  1.Sh.10\n  2.Sh.20\n  3.Sh.50\n  4.Sh.100\n  5.Sh.250"<<endl;
            cin>>O;
        }
        if(T==500){
            cout<<"Choose the option for the amount that you would want to Okoa between:\n  1.Sh.10\n  2.Sh.20\n  3.Sh.50\n  4.Sh.100\n  5.Sh.250\n  6.Sh.500"<<endl;
            cin>>O;
        }

        switch (O){
        case 1:
            cout<<"Your request has been processed.\nYou have received Ksh."<<9<<".\nKsh."<<1<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<10<<endl;
            break;
        case 2:
            cout<<"Your request has been processed.\nYou have received Ksh."<<18<<".\nKsh."<<2<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<20<<endl;
            break;
        case 3:
            cout<<"Your request has been processed.\nYou have received Ksh."<<45<<".\nKsh."<<5<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<50<<endl;
            break;
        case 4:
            cout<<"Your request has been processed.\nYou have received Ksh."<<90<<".\nKsh."<<10<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<100<<endl;
            break;
        case 5:
            cout<<"Your request has been processed.\nYou have received Ksh."<<225<<".\nKsh."<<25<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<250<<endl;
            break;
        case 6:
            cout<<"Your request has been processed.\nYou have received Ksh."<<450<<".\nKsh."<<50<<" has been deducted as transaction fee.\nYour Okoa Balance is Ksh."<<500<<endl;
            break;
        default:
            cout<<"Not applicable for this service."<<endl;
        }
    }
    return 0;
}
