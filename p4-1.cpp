#include<iostream>
using namespace std;
    void swap(int &j , int &k){
        
        int temp = j;
        j = k;
        k = temp ;
        
    }
int main()
{
   int a,b;
    cout << "Enter value of a  :  "<<endl ;
    cin>>a;
    cout << "Enter value of b : " << endl;
    cin>>b;
    swap(a,b);
    cout << "a = " <<a<<endl;
    cout << "b = " <<b<<endl;
    return 0;
}