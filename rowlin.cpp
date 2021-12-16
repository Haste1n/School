#include <iostream>
using namespace std;

int main() {
    int a, b, x;
    cout<<"Program rozwiazuje rownanie a*x+b=0."<<endl;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    if (a == 0) {
        if (b == 0) {
            cout<<"Nieskonczenie wiele rozwiazan.";
        }
        else {
            cout<<"Rownanie sprzeczne";
        }
    }
    else {
        x = -b / a;
        cout<<"Wynik rownania rowny: "<<x;
    }
    return 0;
}
