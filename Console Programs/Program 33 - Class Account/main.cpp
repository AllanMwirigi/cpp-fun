#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
   Account account1(25000);
   Account account2(55000);

   int x,option;
   char O;
   cout<<"Please enter the account number: ";
   cin>>x;

   if(x==1){
    do{
    cout<<"Choose an option\n\t1.Current balance\n\t2.Deposit\n\t3.Withdraw"<<endl;
    cin>>option;

    switch(option){
     case 1:
         cout<<account1.getInitialBalance()<<endl;
         break;
     case 2:
        cout<<account1.deposit()<<endl;
        break;
     case 3:
         cout<<account1.withdraw()<<endl;
         break;
     default:
        cout<<"Invalid Entry!"<<endl;
    }
    cout<<"Enter B(BACK) or E(EXIT): ";
    cin>>O;
    }
    while(O=='B');
   }

   if(x==2){
    do{
    cout<<"Choose an option\n\t1.Current balance\n\t2.Deposit\n\t3Withdraw"<<endl;
    cin>>option;

    switch(option){
     case 1:
         cout<<account2.getInitialBalance()<<endl;
         break;
     case 2:
        cout<<account2.deposit()<<endl;
        break;
     case 3:
         cout<<account2.withdraw()<<endl;
         break;
     default:
        cout<<"Invalid Entry!"<<endl;
    }
    cout<<"Enter B(BACK) or E(EXIT): ";
    cin>>O;
    }
    while(O=='B');
   }

   if(x!=1&&x!=2){
    cout<<"Account number not recognized!";
   }
}
