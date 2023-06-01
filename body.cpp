#include <iostream>
#include "header.h"
#include <fstream>
using namespace std;

string ocena(int x){
    if(x==1){
        return "ndst";
    }
    else if(x==2){
        return "dop";
    }
    else if(x==3){
        return "dst";
    }
    else if(x==4){
        return "db";
    }
    else if(x==5){
        return "bdb";
    }
}

void Pytanie::czytanie(){
    fstream plik;
    plik.open("spis.txt", ios::in);
    int nr_linii = (id-1)*6+1;
    int l=1;
    string linia;
    while(getline(plik, linia)){
        if(l==nr_linii) tresc = linia;
        else if(l==nr_linii+1) a = linia;
        else if(l==nr_linii+2) b = linia;
        else if(l==nr_linii+3) c = linia;
        else if(l==nr_linii+4) d = linia;
        else if(l==nr_linii+5) poprawna = linia;
        l++;
    }
    plik.close();
}

void Pytanie::wywolanie(){
    cout<<endl<<id<<". "<<tresc<<endl;
    cout<<"\n";
    cout<<"a) "<<a<<endl;
    cout<<"b) "<<b<<endl;
    cout<<"c) "<<c<<endl;
    cout<<"d) "<<d<<endl;
    cout<<endl<<"Odpowiedz: ";
    cout<<"\n";
    cin>>podana;
    cout<<"\n";
}

int Pytanie::sprawdz(){
    if(podana == poprawna){
        punkt=1;
    }
    else{
        punkt=0;
    }
}
