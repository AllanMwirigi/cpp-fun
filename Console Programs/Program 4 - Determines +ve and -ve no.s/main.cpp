#include <iostream>

using namespace std;

int main()
{
    int x;

    cout<<"Please enter the number:"<<endl;
    cin>>x;

    if(x==0){
        cout<<"This number is zero!"<<endl;
    }

    if(x>0){
        cout<<"This number is positive."<<endl;
    }

    if(x<0){
        cout<<"This number is negative."<<endl;
    }

    return 0;
}
