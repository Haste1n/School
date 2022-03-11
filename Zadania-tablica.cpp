#include <iostream>
using namespace std;
const int n=5;
int tab[n][n];     //ZAD. 3
int tab1[n];       //ZAD. 1, 2

void wpisz2 (){       //ZAD. 3
    for (int i = 0; i < n; i++){
        for (int l = 0; l < n; l++){
            cout<<"Wprowadz liczbe o indeksie "<<i<<":"<<l<<"; ";
            cin>>tab[i][l];
            }
        }
}

int suma (){           //ZAD. 3
    int suma = 0;
    for (int i = 0; i < n; i++){
        for (int l = 0; l < n; l++){
            if (i == l) suma += tab[i][l];
            }
        }
    return suma;
}

void wpisz1 (){       //ZAD. 1, 2
    for (int i = 0; i < n; i++){
        cout<<"Wprowadz liczbe o indeksie "<<i<<": ";
        cin>>tab1[i];
        }
}

void wypisz (){       //ZAD. 1
    for (int i = 0;i < n; i++){
        cout<<"\n"<<n - 1 - i<<": "<<tab1[n-1-i];
        }
}

void zera (){         //ZAD. 2
    bool yes = false;
    for (int i = 0; i < n; i++){
        if (tab[i]==0){
            yes = true;
            cout<<"Indeks "<<i<<" ma wartosc 0."<<endl;
            }
        }
    if (yes == false) {
        cout<<"Nie ma zmiennych rownych 0.";
        }
}

int main(){
wpisz1();     //ZAD. 1, 2
wypisz();     //ZAD. 1
zera();       //ZAD. 2
wpisz2();     //ZAD. 3
cout<<"Suma: "<<suma()<<endl;   //ZAD. 3
return 0;
}
