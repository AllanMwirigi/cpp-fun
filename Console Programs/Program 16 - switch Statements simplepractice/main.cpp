#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter a number below 5:"<<endl;
    cin>>x;
    switch (x){
    case 1:
        cout<<"You have entered one."<<endl;
        break;
    case 2:
        cout<<"You have entered two."<<endl;
        break;
    case 3:
        cout<<"You have entered three."<<endl;
        break;
    case 4:
        cout<<"You have entered four."<<endl;
        break;
    case 5:
        cout<<"You have entered five."<<endl;
        break;
    default:
        cout<<"Your number is not in range."<<endl;
        }
        return 0;
}
