#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
    public:
        Account(int);
        void setInitialBalance(int);
        int getInitialBalance();
        int deposit();
        int withdraw();

    private:
        int initialAccountBalance;
};

#endif // ACCOUNT_H
