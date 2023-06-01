#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int main()
{
    Pytanie p[5];
    int suma = 0;
    cout<<"Quiz z algorytmiki\n"<<endl;
    for(int i = 0; i < 5; i++){
        p[i].id=i+1;
        p[i].czytanie();
        p[i].wywolanie();
        p[i].sprawdz();
        suma+=p[i].punkt;
    }
    cout<<endl<<"Koniec! Punkty: "<<suma<<"/5. Ocena: "<<ocena(suma)<<".";
}
