#include<iostream>

using namespace std;
int max(int x , int y , int z){
        if(x > y && x > z){
            cout <<x<<" is Greater" << endl;
        }else if(y > x && y > z){
            cout <<y<<" is Greater" << endl;
        }else if(z > x && z > y){
            cout <<z<<" is Greater" << endl;
        }
}
string max(string x , string y , string z){
    int la=x.length();
    int lb=y.length(); 
    int lc=z.length();
        if(la > lb && la > lc){
              return x;
        }else if(lb > la && lb > lc){
              return y;
        }else if(lc > la && lc > lb){
              return z;
        }
}

int main()
{
    int a,b,c;
    cout << "Enter Three number - " ;
    cin>>a>>b>>c;
      
    cout << max(a,b,c)<< endl;
    return 0;
}
