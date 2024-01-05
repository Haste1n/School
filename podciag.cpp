#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
using namespace std;

const int n=10;

void losuj(int tab[n]){
    for(int i=0; i<n; i++){
        tab[i]=(rand()%50)*(pow(-1,rand()));
    }
}

void wypisz(int tab[n]){
    for(int i=0; i<n; i++){
        cout<<i+1<<". "<<tab[i]<<endl;
    }
}

void spons(int tab[n]){
    int sum_now=0, sum=0;
    for(int i=0; i<n; i++){
        if(sum_now+tab[i]>=0){
            sum_now+=tab[i];
        }
        else{
            sum_now=0;
        }
        sum=max(sum_now,sum);
    }
    cout<<"Najwieksza suma pogciagu: "<<sum;
}

void npnm(int tab[n]){
    int akt=tab[0], dl=1, maks=0, suma=tab[0], maks_suma=0;
    for(int i=1; i<n; i++){
        if(tab[i]>=akt){
            dl++;
            suma+=tab[i];
        }
        else{
            if(maks_suma<suma){
                maks=dl;
                maks_suma=suma;
            }
            suma=tab[i];
            dl=1;
        }
        akt=tab[i];
    }
    if(maks_suma==0){
        maks=dl;
        maks_suma=suma;
    }
    cout<<endl<<"Najwieksza suma podciagu niemalejacego: "<<maks_suma<<endl;
    cout<<"Dlogosc najdluzszego podciagu niemalejacego: "<<maks<<endl;
}

int main(){
    int tab[n];
    srand(time(0));
    losuj(tab);
    wypisz(tab);
    spons(tab);
    npnm(tab);
    return 0;
}
