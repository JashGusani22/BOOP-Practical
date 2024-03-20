#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double mk=1000.0;
    double cmm=100.0;
    double im=39.3701;
    double fm=3.28084;
    double kilometers;
    
    cout<<"Enter Distance in kilometers: ";
    cin>>kilometers;
    
    
    double meter=kilometers*mk;
    double cmmeter=meter*cmm;
    double inch=cmmeter*im;
    double feet = inch*fm;
    
    cout<<fixed<<setprecision(2);
    cout<<setw(15)<<setfill('_')<<left<<"Meter:"<<setw(11)<<right<<meter<<endl;
    cout<<setw(15)<<setfill('_')<<left<<"Centimeter:"<<setw(11)<<right<<cmmeter<<endl;
    cout<<setw(15)<<setfill('_')<<left<<"Inche:"<<setw(10)<<right<<inch<<endl;
    cout<<setw(15)<<setfill('_')<<left<<"Feet:"<<setw(10)<<right<<feet<<endl;
    
    return 0; 
}