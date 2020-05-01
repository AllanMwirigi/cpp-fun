#include <iostream>

using namespace std;

int main()
{
   int M;

   cout<<"Please enter your mark:"<<endl;
   cin>>M;

   if(M<0&&M>100){
    cout<<"Error!Invalid Entry!"<<endl;
   }
   else{

   if(M>=0&&M<25){
    cout<<"Your grade is E."<<endl;
    cout<<"Fail!"<<endl;
   }

   if(M>=25&&M<45){
    cout<<"Your grade is D."<<endl;
    cout<<"Satisfactory."<<endl;
   }

   if(M>=45&&M<65){
    cout<<"Your grade is C."<<endl;
    cout<<"Average."<<endl;
   }

   if(M>=65&&M<75){
    cout<<"Your grade is B."<<endl;
    cout<<"Good."<<endl;
   }

   if(M>=75&&M<90){
    cout<<"Your grade is A-."<<endl;
    cout<<"Very Good!"<<endl;
   }

   if(M>=90&&M==100){
    cout<<"Your grade is A."<<endl;
    cout<<"Excellent!"<<endl;
   }
   }

   return 0;
}
