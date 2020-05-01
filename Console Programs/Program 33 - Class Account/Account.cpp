#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(int initialBalance)
{
   setInitialBalance(initialBalance);
}

void Account::setInitialBalance(int initialBalance){
    initialAccountBalance=initialBalance;
}

int Account::getInitialBalance(){
    return initialAccountBalance;
}
int D,W;
int Account::deposit(){
    cout<<"Enter the amount to be deposited in the account: ";
    cin>>D;
    cout<<"\nYou have deposited KSH."<<D<<" in the account"
        <<"\nYour new balance is KSH.";
    return getInitialBalance()+D;
}

int Account::withdraw(){
    cout<<"Enter the amount to be withdrawn from the account: ";
    cin>>W;
    if(W<=getInitialBalance()){
    cout<<"\nYou have withdrawn KSH."<<W<<" from the account"
        <<"\nYour new balance is KSH.";
        return getInitialBalance()-W;
    }
    else{
        cout<<"Sorry. The account balance is insufficient for this withdrawal.";
        return 0;
    }
}

