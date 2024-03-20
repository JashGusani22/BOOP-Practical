#include<iostream>

using namespace std;

class Employee{
    public:
      int Number;
   string EN;
   double Basic;
   double DA;
   double IT;
   double NS;
};

int main()
{
      Employee e1;
     cout << "Enter Employee Number " ;
     cin>>e1.Number;
     cout << endl;
     
     cout << "Enter Employee Name " ;
     cin>>e1.EN;
        cout << endl;
     
       cout << "Enter Employee Basic " ;
     cin>>e1.Basic;
        cout << endl;
     
       cout << "Enter Employee DA " ;
     cin>>e1.DA;
        cout << endl;
       cout << "Enter Employee IT " ;
     cin>>e1.IT;
        cout << endl;
       cout << "Enter Employee NS " ;
     cin>>e1.NS;
        cout << endl;
     cout << "Employee Number = " << e1.Number<<endl;
     cout << "Employee Name = " << e1.EN<<endl;
     cout << "Employee Basic = " << e1.Basic<<endl;
    cout << "Employee DA = " << e1.DA<<endl;
    cout << "Employee IT = " << e1.IT<<endl;
    cout << "Employee NS = " << e1.NS<<endl;
    
    
    return 0;
}