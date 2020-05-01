#include <iostream>

using namespace std;

int main()
{
    string row1(5,'*');
    cout<<row1<<endl;
    string spaces(3,' ');
    string otherrows='*'+spaces+'*';
    int x;
    for(x=0;x<3;x++){
        cout<<otherrows<<endl;
    }
    cout<<row1<<endl<<endl<<endl;

    string row1r(10,'*');
    cout<<row1r<<endl;
    string spacesr(8,' ');
    string otherrowsr='*'+spacesr+'*';
    int a;
    for(a=0;a<3;a++){
        cout<<otherrowsr<<endl;
    }
    cout<<row1r<<endl;

    return 0;
}
