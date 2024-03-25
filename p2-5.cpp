#include<iostream>
using namespace std;
int x = 6;
int main(){
    int x =1;
    cout<<x<<"This is local value"<<endl;
    cout<<::x<<"This is Global value"<<endl;
    return 0;
}
