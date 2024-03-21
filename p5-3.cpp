#include<iostream>

using namespace std;

class Employee{
    public:
    double cm;
   
   double cmToin(double cm){
       return cm*0.393701;
   }
   double cmTofe(double cm){
       return cm*0.0328084;
   }
   double cmTome(double ){
       return cm*0.01;
   }
   double cmTokil(double cm){
       return cm*0.00001;
   }
};

int main()
{
      Employee e1;
      
      cout<<"Enter Centimeter :- ";
      cin>>e1.cm;
        cout<<"Centimeter To Inch :- "<<e1.cmToin(e1.cm)<<endl;
        cout<<"Centimeter To Feet :- "<<e1.cmTofe(e1.cm)<<endl;
        cout<<"Centimeter To Meter :- "<<e1.cmTome(e1.cm)<<endl;
        cout<<"Centimeter To Kilometer :- "<<e1.cmTokil(e1.cm)<<endl;
        return 0;
}
