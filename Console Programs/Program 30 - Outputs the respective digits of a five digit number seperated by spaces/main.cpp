#include <iostream>

using namespace std;

int main()
{
    int d5,d4,d3,d2,a,b,c,d,e;
    cout<<"Please enter a five digit integer: ";
    cin>>d5;

    a=d5/10000;
    d4=d5%10000;
    b=d4/1000;
    d3=d4%1000;
    c=d3/100;
    d2=d3%100;
    d=d2/10;
    e=d2%10;

    cout<<"\n"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t"<<e<<endl;

    return 0;
}
