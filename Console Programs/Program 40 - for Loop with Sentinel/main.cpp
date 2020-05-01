#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter five integers.(Enter 9999 after entering all values):"<<endl<<endl;

    int total=0;
    int counter;
    for( counter=0;counter<1000;counter++)
    {
        cout<<"Enter a number"<<endl;
        cin>>n;
        if(n==9999)
            break;
        total+=n;
    }
    int average=total/counter;
    cout<<"\nThe average of the integers is "<<average;
    return 0;
}

