#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x,n;
    char Response;


    do{
     srand(time(0));
    n=(1+rand()%1000);

    cout<<"I have a number between 1 and 1000.\nCan you guess the number?\n? ";
    cin>>x;

        while(x<n){
            cout<<"Too low. Try again\n? ";
            cin>>x;

        while(x>n){
            cout<<"Too high. Try again\n? ";
            cin>>x;}}

         while(x>n){
            cout<<"Too high. Try again\n? ";
            cin>>x;

        while(x<n){
            cout<<"Too low. Try again\n? ";
            cin>>x;}}

        if(x==n){
        cout<<"Excellent! You guessed the number."<<endl;
        cout<<"Would you like to play again? (y or n)_ ";
        cin>>Response;
         }
    }

    while(Response=='y');

    return 0;
}
