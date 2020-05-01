#include <iostream>

using namespace std;


int main()
{
    //A customer Simcard stores a large number of details for the ISP including: cell number, ID number, names, date of activation, airtime topups,calls made, SMSs, data usage, location, serial of handset. The following program uses a struct to ask for entry of some of the mentioned details for one customer and then outputs them
    struct ISP{
    char cellNo[11];
    int IDNo;
    string firstname;
    string secondname;
    string DateofActivation;
    char location[10];
    };
    ISP details;

    cout<<"Enter cell number:"<<endl;
    cin>>details.cellNo;
    cout<<"Enter ID number:"<<endl;
    cin>>details.IDNo;
    cout<<"Enter name:"<<endl;
    cin>>details.firstname>> details.secondname;
    cout<<"Enter date of activation:"<<endl;
    cin>>details.DateofActivation;
    cout<<"Enter location:"<<endl;
    cin>>details.location;

    cout<<"\nThe following are the details of the customer:"<<endl;
    cout<<"  Name: "<<details.firstname<<" "<<details.secondname<<endl;
    cout<<"  ID number: "<<details.IDNo<<endl;
    cout<<"  Cell number: "<<details.cellNo<<endl;
    cout<<"  Date of activation: "<<details.DateofActivation<<endl;
    cout<<"  Location: "<<details.location<<endl;

    return 0;

}
