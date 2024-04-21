#include<iostream>
using namespace std;


class Putset{
    
    float cost ;
    float quantity;
    
    public :
    float get_data(){
   cout << "Cost " << cost <<endl;
   cout << "Quantity " << quantity;
}
    float put_data (float a , float b);
};
float Putset:: put_data(float a , float b ){
        cost =a;
        quantity = b;    
        return get_data ();
                }

int main()
{
Putset p1;
    float x;
    float y ;
    cout << "Enter value " ;
    cin>>x>>y;
    p1.put_data(x,y);
    return 0;
}
