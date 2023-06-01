#include <iostream>
#include <string>
#include "header.h"
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
