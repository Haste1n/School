#include <iostream>
using namespace std;

int main(){
int tab1[4], tab2[4], tabw[4], d=0;
cout<<"Jezeli liczb ma mniej niz 4 cyfry to daj przed nia 9, w wolne miejsca."<<endl;
cout<<"NP. 111 (czyli 7) zapiszemy 9-1-1-1. A 10 (czyli 2) zapiszemy 9-9-1-0."<<endl<<"Chyba ze pierwsza liczba ma dlugosc wieksza niz druga to wtedy przed liczba zamiast 9 dajemy 0."<<endl<<"NP. dla 111 (7) - 10 (2). 111 zapiszemy 9-1-1-1 a 10 zapiszemy 9-0-1-0."<<endl;
cout<<"Odjemna: "<<endl;
for(int i = 0; i<4; i++){
    cin>>tab1[i];
}
cout<<"Odjemnik: "<<endl;
for(int i = 0; i<4; i++){
    cin>>tab2[i];
}
int j = 3, k = 3;
for(int i = 3; i>=0; i--){
    if(tab1[i]!=9){
        if(tab2[j]!=9){
            if(tab1[i]==0){
                if(tab2[j]==1){
                    if(tab1[i-1]!=9){
                       tab1[i-1]=0;
                    }
                    tabw[k]=1;
                    d++;
                    k--;
                }
                else{
                    tabw[k]=0;
                    d++;
                    k--;
                }
            }
            else{
                tabw[k]=tab1[i]-tab2[j];
                d++;
                k--;
            }
        }
    }
    j--;
}
cout<<"Wynik: ";
for(int i=1; i<=d; i++){
    cout<<tabw[3-d+i];
}
return 0;
}
