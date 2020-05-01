#include <iostream>

using namespace std;

int main()
{
   int arr1[10]={0,1,2,3,4,5,6,7,8,9};
   int arr2[10];
   int i;

   for(int i=0;i<10;++i){
    arr1[i]=arr2[i];
   }
   return 0;
}
