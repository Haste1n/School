#include <iostream>
using namespace std;

const int m = 2, k = 4;
int tablica[m][k];

void wyczytaj(){
cout<<"Stan tablicy:"<<endl;
for (int i = 0; i < m; i++){
        for (int l = 0; l < k; l++){
            cout<<"  "<<i<<":"<<l<<" ; "<<tablica[i][l]<<endl;
        }
    }
}

void wyczytaj1(){
int n, l;
cout<<"\nPodaj pierwszy wymiar do wyczytania: ";
cin>>n;
cout<<"\nPodaj drugi wymiar do wyczytania: ";
cin>>l;
cout<<"  "<<n<<":"<<l<<" ; "<<tablica[n][l]<<"\n"<<endl;
}

void wczytaj(){
for (int i = 0; i < m; i++){
    for (int l = 0; l < k; l++){
        cout<<"Podaj liczbe o indeksie "<<i<<":"<<l<<" ; ";
        cin>>tablica[i][l];
        }
    }
}

int iloczyn(){
int iloczyn = 1;
for (int i = 0; i < m; i++){
    for (int l = 0; l < k; l++){
        if (tablica[i][l] > 0) iloczyn *= tablica[i][l];
        }
    }

}

int main(){
wczytaj();
wyczytaj1();
wyczytaj();
cout<<"\nIloczyn liczb: ";
cout<<iloczyn();
}
