#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

 double calculateCharge(double h)
   {
       if(h<=3.0)
        return 2.00;

       if(h>3.0&&h<24.0)
       {
           double result;
           result=2+(ceil(h)-3.0)*0.5;
           if(result<=10.0){
            return result;
           }
           else{
            return 10.0;
           }
       }
       if(h==24||h>24)
        return 10.00;
   }

int main()
{
    double c1,c2,c3;
   cout<<"Please enter the hours parked for three cars:"<<endl;
   cin>>c1>> c2>> c3;

   cout<<"Car"<<setw(10)<<"Hours"<<setw(20)<<"Charge"<<fixed<<endl
       <<"1"<<setw(12)<<setprecision(1)<<c1<<setw(20)<<setprecision(2)<<calculateCharge(c1)<<endl
       <<"2"<<setw(12)<<setprecision(1)<<c2<<setw(20)<<setprecision(2)<<calculateCharge(c2)<<endl
       <<"3"<<setw(12)<<setprecision(1)<<c3<<setw(20)<<setprecision(2)<<calculateCharge(c3)<<endl
       <<"TOTAL"<<setw(8)<<setprecision(1)<<c1+c2+c3<<setw(20)<<setprecision(2)<<calculateCharge(c1)+calculateCharge(c2)+calculateCharge(c3)<<endl;
}
