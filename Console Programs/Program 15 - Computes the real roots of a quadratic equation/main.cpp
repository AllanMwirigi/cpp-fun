#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,x1,x2;
    cout << "Enter the values of a,b and c according to the equation ax^2+bx+c=0, where a,b and c are integers" << endl;
    cout<<"a is: ";
    cin>>a;
    cout<<"b is: ";
    cin>>b;
    cout<<"c is: ";
    cin>>c;

    x1=(-b+((b^2)-(4*a*c))^(1/2))/(2*a);

    x2=(-b-((b^2)-(4*a*c))^(1/2))/(2*a);

    if(a==0&&b==0){
        cout<<"No solution"<<endl;
    }
    else{
    cout<<"The first root is: ";
    cout<<x1<<endl<<endl;
    cout<<"The second root is: ";
    cout<<x2<<endl;
    }

    return 0;
}
