#include <iostream>

using namespace std;

int main()
{
    int arr1[11][10]={{0,1,2,3,4,5,6,7,8,9},{0},{1},{2},{3},{4},{5},{6},{7},{8},{9}};
    int arr2[11][10]={{0,1,2,3,4,5,6,7,8,9},{0},{1},{2},{3},{4},{5},{6},{7},{8},{9}};
    int P;
    int i,j;
    cout<<"Enter two numbers"<<endl;

    for(i=0;i<11;i++){
        for(j=0;j<11;j++){
            cin>>arr1[i][j]>> arr2[i][j];
        }
    }
    P=arr1[i][j]*arr2[i][j];
    cout<<"The product of the two numbers is: "<<P<<endl;
    return 0;
}
