#include <iostream>

using namespace std;

int main()
{
  int M,E,K,P,C,B,H;

  cout<<"Enter marks in Maths"<<endl;
  cin>>M;
  cout<<"Enter marks in English"<<endl;
  cin>>E;
  cout<<"Enter marks in Kiswahili"<<endl;
  cin>>K;
  cout<<"Enter marks in Physics"<<endl;
  cin>>P;
  cout<<"Enter marks in Chemistry"<<endl;
  cin>>C;
  cout<<"Enter marks in Biology"<<endl;
  cin>>B;
  cout<<"Enter marks in History"<<endl;
  cin>>H;

  int sum=M+E+K+P+C+B+H;
  int average=(M+E+K+P+C+B+H)/7;

  cout<<"The sum of marks is:"<<sum<<endl;
  cout<<"The average is:"<<average;

  return 0;
}
