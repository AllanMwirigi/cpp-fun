#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
   int x;
   cout<<"Enter 1 to shut down computer,\n      2 to close all running programs\n      3 to restart the computer."<<endl<<endl;
   cout<<"Enter option: ";
   cin>>x;
   switch (x)
   {
       case 1:
           system("shutdown -s"); //shuts down the computer
           break;
       case 2:
           system("shutdown -f");  //forces all running programs to close
           break;
       case 3:
           system("shutdown -r");  //restarts the computer
           break;
       case 4:
        system("pause");
        default:
            cout<<"Invalid entry!";

   }
   return 0;
}
