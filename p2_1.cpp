#include<iostream>
using namespace std;

int main()
{    
    double x;
    double y;
    double add;
    double sub;
    double div;
    double mul;
    
    cout <<"Enter Two Number " ;
    cin >>x>>y;
    
    add = x + y;
    sub = x - y;
    div = x/y;
    mul = x * y;
    
    cout <<"Two Number sum = " <<add<<endl;
    cout<<"Two Number Subtraction ="<<sub<<endl;
    cout<<"Two Number Division = "<<div<<endl;
    cout<<"Two Number  Multiple ="<<mul <<endl;
            return 0;
}