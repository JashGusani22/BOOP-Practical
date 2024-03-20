#include<iostream>
using namespace std;

int main()
{
float n[]={1,3,8,6,5,9,10,2,4,7};
float sum;
float avg;
int c = 1;

for(int i=0; i<10; i++) {
sum += n[i];
}
while(c < 10) {
for(int k = 0 ; k<10-c;k++) {
if(n[k] > n[k+1]) {
int a = n[k];
n[k] = n[k+1];
n[k+1] = a;
}
}c++;
}

avg = sum/10;
for(int j = 0; j<10; j++) {
cout << n[j] <<" ";
}cout<< endl;

cout << "Sum is " <<sum <<endl;

cout << "avg " <<avg <<endl;
    return 0;
}