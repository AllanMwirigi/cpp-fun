#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{
    ofstream text("Mytext.txt", ios::out | ios::binary);

    for(int x=0; x>0; x++)
    {
         text.seekp(x);
         c=toupper(c);
          text.write(&c, sizeof(c));

    }
    return 0;
}
