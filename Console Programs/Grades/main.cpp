#include <iostream>

using namespace std;

int main()
{
    //while(1){

    double catMark, examMark, total;
    cout<<"Enter CAT mark or -1 if N/A: ";cin>>catMark;
    cout<<"Enter Exam mark or -1 if N/A: ";cin>>examMark;

    if(catMark == -1 || examMark == -1){
        cout<<"\nGrade: Incomplete\n";
        return 0;
    }

    total = catMark + examMark;
    if(total >= 70){
        cout<<"\nTotal: "<<total<<" Grade: A\n";
    }
    if(total >= 60 && total < 70){
        cout<<"\nTotal: "<<total<<" Grade: B\n";
    }
    if(total >= 50 && total < 60){
        cout<<"\nTotal: "<<total<<" Grade: C\n";
    }
    if(total >= 40 && total < 50){
        cout<<"\nTotal: "<<total<<" Grade: D\n";
    }
    if(total < 40){
        cout<<"\nTotal: "<<total<<" Grade: Fail\n";
    }

    //cout<<"\n\n";

    //}

    return 0;
}
