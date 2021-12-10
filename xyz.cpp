#include <iostream>
using namespace std;

int main () {
int x, y, z;
cout<<"Podaj x, y i z: "<<endl;
cin>>x>>y>>z;
if (x > 0 and y > 0 and z > 0) {
    cout<<"Najwieksza jest: ";
    if (x >= y) {
        if (x >= z) {
            cout<<x;
        }
        else {
            cout<<z;
        }
    }
    else {
        if(y >= z){
            cout<<y;
        }
        else {
            cout<<z;
        }
    }
}
}
