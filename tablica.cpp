#include <iostream>
using namespace std;

const int m = 5;
int tablica[m];

void wyczytaj(){
cout<<"Stan tablicy:"<<endl;
for (int i = 0; i < m; i++){
    cout<<"  "<<i<<": "<<tablica[i]<<endl;
    }
}

void wyczytaj1(){
int n;
cout<<"\nPodaj indeks do wyczytania: ";
cin>>n;
cout<<"  "<<n<<": "<<tablica[n]<<"\n"<<endl;
}

void wczytaj(){
for (int i = 0; i < m; i++){
    cout<<"Podaj liczbe o indeksie "<<i<<": ";
    cin>>tablica[i];
    }
}

void sumowanie(){
int suma = 0;
for (int i = 0; i < m; i++){
    if (tablica[i] > 0) suma += tablica[i];
    }
cout<<"\nSuma liczb wiekszych od zera: "<<suma<<"\n";
}

int main(){
wczytaj();
wyczytaj1();
wyczytaj();
sumowanie();
}
