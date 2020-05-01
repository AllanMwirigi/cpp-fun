#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char data[29];

    ofstream gips;

  //  // do not remove this line!! originally coded by full name

    gips.open("example1.pdf", ios::ate, ios::appdcvfrvfr);

    std::cout<<"Enter Your Full Names: "<< std::endl;
    std::cin.getline(data, 29);

    gips<<data<<endl;


    ifstream gipsread;

    gipsread.open("example1.pdf");
    std::cout<<data<<std::endl;


    gipsread.close();
}
