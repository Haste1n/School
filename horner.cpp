#include <iostream>
using namespace std;

int main()
{
    int M, wynik = 0, x;
    cout<<"Podaj ilosc poteg: ";
    cin>>M;
    int tab[M];
    for (int i = 0; i < M; i++){
        cout<<"Podaj wspolczynnik "<<i + 1<<": ";
        cin>>tab[i];
    }
    cout<<"Podaj liczbe x: ";
    cin>>x;
    for (int i = 0; i < M; i++){
        wynik = wynik * x + tab[i];
    }
    cout<<"Wynik: "<<wynik;
}
