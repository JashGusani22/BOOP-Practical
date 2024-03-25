#include<iostream>
using namespace std;

    int Multiplication(int x,int y){
        return x*y;
    }
int main(){
    int a;
    int b;
    int Ans;
    
    cout<<"Enter Two Number:- ";
    cin>>a>>b;
    
    Ans = Multiplication(a,b);
    
    cout<<"Give Number of Multiplication is = "<<Ans;
    return 0;
}
