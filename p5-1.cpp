#include<iostream>
using namespace std;

struct college_info{
    string name;
    int code;
    string dept;
    int intake;
};

int main()
{
    college_info college;
    
    college.name = "Government Polytechnic Junagadh" ;
    college.code = 619  ;
    college.dept = "Computer" ;
    college.intake = 79;
    
     cout << "College Name:- "<<college.name<< endl;
     cout << "College Code:- "<<college.code << endl;
     cout << "Department :- "<<college.dept << endl;  
     cout << "Intake :- "<<college.intake << endl;  
    return 0;
}