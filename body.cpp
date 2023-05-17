#include <iostream>
#include "header.h"
#include <fstream>
using namespace std;

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
    }
    plik.close();
}

void Pytanie::wywolanie(){

}
