#include <iostream>

using namespace std;

int main()
{
    int s;
    cout<<"Enter the size of the square's side: ";
    cin>>s;
    int r=s-2;
   string row1(s,'*');
    cout<<"\n\n\t"<<row1<<endl;
    string spaces(r,' ');
    string otherrows='*'+spaces+'*';

    for(int x=0;x<r;x++){
        cout<<"\t"<<otherrows<<endl;
    }
    cout<<"\t"<<row1<<endl<<endl;

}
