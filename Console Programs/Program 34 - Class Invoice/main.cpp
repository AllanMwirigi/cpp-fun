#include <iostream>
#include "Invoice.h"

int main()
{
    int n,PN;
    cout<<"Enter product number: ";
        cin>>PN;
        cout<<"\nEnter the number of items purchased: ";
        cin>>n;
        cout<<"\n\nPart Number\tPartDescription\tNo.Items Purchased\tPrice of each\tTotal"<<endl<<endl;

    Invoice soap1("A239DF*","Soap: Geisha",n,50);
    Invoice pen2("BSK378#","Pen: Teepee",n,10);

        if(PN==1){
            cout<<soap1.getPartNumber()<<"\t\t"<<soap1.getPartDescription()<<"\t\t\t"<<soap1.getQuantity()<<"\t\t"<<soap1.getItemPrice()<<"\t"<<soap1.getInvoice()<<endl;
        }
        if(PN==2){
            cout<<pen2.getPartNumber()<<"\t\t"<<pen2.getPartDescription()<<"\t\t"<<pen2.getQuantity()<<"\t\t"<<pen2.getItemPrice()<<"\t"<<pen2.getInvoice()<<endl;;
        }
}
