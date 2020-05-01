#include "Invoice.h"

Invoice::Invoice(string number,string description,int quantity,int price)
{
    setPartNumber(number);
    setPartDescription(description);
    setQuantity(quantity);
    setItemPrice(price);
}

void Invoice::setPartNumber(string number){
    partNumber=number;
}
string Invoice::getPartNumber(){
    return partNumber;
}

void Invoice::setPartDescription(string description){
    partDescription=description;
}
string Invoice::getPartDescription(){
    return partDescription;
}

void Invoice::setQuantity(int quantity){
    tQuantity=quantity;
}
int Invoice::getQuantity(){
    return tQuantity;
}

void Invoice::setItemPrice(int price){
    itemPrice=price;
}
int Invoice::getItemPrice(){
    return itemPrice;
}

int Invoice::getInvoice(){
    return tQuantity*itemPrice;
}

