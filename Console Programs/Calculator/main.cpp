#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

void readValues(char op);
void evaluate(double values[10], char op);

int main()
{
    int quit = 0;
    while(quit == 0){
        char operation;
        cout << "Enter operation you would like to perform" << endl;
        cout << "A for Addition | S for Subtraction | M for Multiplication | D for Division | R for Square-root | Q to Quit" <<endl;
        cin >> operation;
        cout << "\n";

        switch(operation){
            case 'A':
                cout << "Enter values to Add or = to evaluate:"<<endl;
                readValues('A');
                break;
            case 'S':
                cout << "Enter values to Subtract or = to evaluate:"<<endl;
                readValues('S');
                break;
            case 'M':
                cout << "Enter values to Multiply or = to evaluate:"<<endl;
                readValues('M');
                break;
            case 'D':
                cout << "Enter values to Divide or = to evaluate:"<<endl;
                readValues('D');
                break;
            case 'R':
                double value;
                cout << "Enter value: ";
                cin >> value;
                cout<<"Result is: "<<sqrt(value)<<endl;
                cout<<"********************************************************\n\n";
                break;
            case 'Q':
                quit = 1;
                break;
            default:
                cout<<"Invalid selection";
                break;
        }
    }
    cout<<"\nClosing Calculator";
    return 0;
}

void readValues(char op){
    // maximum number of values is 10
    int bufferSize = 10;
    double values[10] = {0,0,0,0,0,0,0,0,0,0};
    string value;
    for(int i = 0; i < bufferSize; i++){
        cout<<"Enter Value "<<i+1<<": ";
        cin>>value;
        if(value != "="){
            //values[i] = stoi(value);
            values[i] = atof(value.c_str());
        }
        else{
            break;
        }
    }
    evaluate(values, op);
}

void evaluate(double values[10], char op){
    double result;
    for(int i = 0; i < 10; i++){
        if(values[i] == 0){
            continue;
        }
        if(i == 0){
            result = values[0];
            continue;
        }
        if(op == 'A'){
            result+=values[i];
        }
        if(op == 'S'){
            result-=values[i];
        }
        if(op == 'M'){
            result*=values[i];
        }
        if(op == 'D'){
            result/=values[i];
        }
    }
    cout<<"Result is: "<<result<<"\n";
    cout<<"********************************************************\n\n";
}

