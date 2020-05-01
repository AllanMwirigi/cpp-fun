#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

class Invoice
{
    public:
        Invoice(string,string,int,int);
        void setPartNumber(string);
        string getPartNumber();
        void setPartDescription(string);
        string getPartDescription();
        void setQuantity(int);
        int getQuantity();
        void setItemPrice(int);
        int getItemPrice();
        int getInvoice();
    private:
        string partNumber;
        string partDescription;
        int tQuantity;
        int itemPrice;
};

#endif // INVOICE_H
