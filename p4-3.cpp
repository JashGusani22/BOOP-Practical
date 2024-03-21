#include<iostream>
using namespace std;

    double circleArea(double r,double pi=3.14){
        return pi*r*r;
    }
int main(){
    double r;
    double Ans;
    cout<<"Enter Circle Radius :- ";
    cin>>r;
    
    Ans = circleArea(r);
    
    cout<<"Circle Radius = "<<Ans;
    
}
