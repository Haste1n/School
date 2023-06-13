#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream plik;
    string linia, duze;
    plik.open("bin.txt",ios::in);
    int i=0, m=0;
    while(getline(plik,linia)){
        int n=stoi(linia,0,2), b=1, akt;
        if(n>m){
            m=n;
            duze=linia;
        }
        akt=n%2;
        n/=2;
        while(n){
            if(n%2!=akt){
                b++;
            }
            akt=n%2;
            n/=2;
        }
        if(b<=2){
            i++;
        }
    }
    cout<<"Liczby z wieksza liczba blokow niz 2: "<<i<<endl;
    cout<<"Najwieksza: "<<duze;
    return 0;
}
