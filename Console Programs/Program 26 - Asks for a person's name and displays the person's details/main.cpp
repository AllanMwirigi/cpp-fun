#include <iostream>

using namespace std;

int main()
{
    struct AlexKamau{
    string cellNo="0706364511";
    int IDNo=34158821;
    int age=29;
    string position="Junior Officer";
    string netsalary="Ksh.60,000";
    string maritalstatus="Married";
    string residence="Kitengela";
    };
    AlexKamau details1;

    struct CollinsMutuma{
    string cellNo="0704365671";
    int IDNo=24178801;
    int age=24;
    string position="Computer Technician";
    string netsalary="Ksh.40,000";
    string maritalstatus="Single";
    string residence="Kahawa";
    };
    CollinsMutuma details2;

    struct TimothyOrigi{
    string cellNo="0726564751";
    int IDNo=14150821;
    int age=31;
    string position="Senior Officer";
    string netsalary="Ksh.80,000";
    string maritalstatus="Married";
    string residence="South B";
    };
    TimothyOrigi details3;

    struct PaulWere{
    string cellNo="0712360441";
    int IDNo=34398021;
    int age=32;
    string position="Projects Co-ordinator";
    string netsalary="Ksh.90,000";
    string maritalstatus="Single";
    string residence="Parklands";
    };
    PaulWere details4;

    struct BrianWahome{
    string cellNo="0706454671";
    int IDNo=39658851;
    int age=35;
    string position="Supervising Officer";
    string netsalary="Ksh.110,000";
    string maritalstatus="Married";
    string residence="South C";
    };
    BrianWahome details5;

    string FN,SN;

    cout<<"Enter the employee's name:"<<endl;
    cin>>FN>>SN;{

     if(FN=="Alex"&&SN=="Kamau"){
        cout<<"  Name: Alex Kamau"<<endl;
        cout<<"  Cell number: "<<details1.cellNo<<endl;
        cout<<"  ID number: "<<details1.IDNo<<endl;
        cout<<"  Age: "<<details1.age<<endl;
        cout<<"  Position: "<<details1.position<<endl;
        cout<<"  Net Salary: "<<details1.netsalary<<endl;
        cout<<"  Marital Status: "<<details1.maritalstatus<<endl;
        cout<<"  Residence: "<<details1.residence<<endl;
     }

        if(FN=="Collins"&&SN=="Mutuma"){
        cout<<"  Name: Collins Mutuma"<<endl;
        cout<<"  Cell number: "<<details2.cellNo<<endl;
        cout<<"  ID number: "<<details2.IDNo<<endl;
        cout<<"  Age: "<<details2.age<<endl;
        cout<<"  Position: "<<details2.position<<endl;
        cout<<"  Net Salary: "<<details2.netsalary<<endl;
        cout<<"  Marital Status: "<<details2.maritalstatus<<endl;
        cout<<"  Residence: "<<details2.residence<<endl;
        }

        if(FN=="Timothy"&&SN=="Origi"){
        cout<<"  Name: Timothy Origi"<<endl;
        cout<<"  Cell number: "<<details3.cellNo<<endl;
        cout<<"  ID number: "<<details3.IDNo<<endl;
        cout<<"  Age: "<<details3.age<<endl;
        cout<<"  Position: "<<details3.position<<endl;
        cout<<"  Net Salary: "<<details3.netsalary<<endl;
        cout<<"  Marital Status: "<<details3.maritalstatus<<endl;
        cout<<"  Residence: "<<details3.residence<<endl;
        }

        if(FN=="Paul"&&SN=="Were"){
        cout<<"  Name: Paul Were"<<endl;
        cout<<"  Cell number: "<<details4.cellNo<<endl;
        cout<<"  ID number: "<<details4.IDNo<<endl;
        cout<<"  Age: "<<details4.age<<endl;
        cout<<"  Position: "<<details4.position<<endl;
        cout<<"  Net Salary: "<<details4.netsalary<<endl;
        cout<<"  Marital Status: "<<details4.maritalstatus<<endl;
        cout<<"  Residence: "<<details4.residence<<endl;
        }

        if(FN=="Brian"&&SN=="Wahome"){
        cout<<"  Name: Brian Wahome"<<endl;
        cout<<"  Cell number: "<<details5.cellNo<<endl;
        cout<<"  ID number: "<<details5.IDNo<<endl;
        cout<<"  Age: "<<details5.age<<endl;
        cout<<"  Position: "<<details5.position<<endl;
        cout<<"  Net Salary: "<<details5.netsalary<<endl;
        cout<<"  Marital Status: "<<details5.maritalstatus<<endl;
        cout<<"  Residence: "<<details5.residence<<endl;
        }
    }


}
