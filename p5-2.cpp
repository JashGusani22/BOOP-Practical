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
      
      e1.Number = 123456789;
      e1.EN = "Jash";
      e1.Basic = 89;
      e1.DA = 21;
      e1.IT =10 ;
      e1.NS = 20000;
      
     cout << "Employee Number = " << e1.Number<<endl;
     cout << "Employee Name = " << e1.EN<<endl;
     cout << "Employee Basic = " << e1.Basic<<endl;
    cout << "Employee DA = " << e1.DA<<endl;
    cout << "Employee IT = " << e1.IT<<endl;
    cout << "Employee NS = " << e1.NS<<endl;
    
    
    return 0;
}
