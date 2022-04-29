#include <iostream>
using namespace std;

int main()
{
    double long a = -1;
    cout<<"Program po podaniu liczby liczy jej silnie.\nDziala na liczby w przedziale <0, 1754>."<<endl;
    while (a < 0){
        cout<<"Liczba musi byc wieksza od zera.\n"<<endl;
        cout<<"Podaj liczbe: ";
        cin>>a;
    }
    if (a == 0) a = 1;
    for (int i = a - 1; i > 1; i--) a *= i;
    cout<<"Silnia rowna: "<<a;
}
