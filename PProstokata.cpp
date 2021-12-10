#include <iostream>
using namespace std;
/ewolucion/
int main(){
int i;
float a, b, p;
i = 0;
cout<<"Program po odebraniu boku a i boku b, wyswietla pole prostokata o bokach a i b."<<endl<<"\n";
while (i < 1){
    cout<<"Podaj a (moze byc ulamek ale nie liczba ujemna): ";
    cin>>a;
    if (a >= 0){
        i = i + 1;
        cout<<"Liczba a przyjeta."<<endl<<"\n";
    }
    else{
        cout<<"*LICZBA MUSI BYC WIEKSZA OD ZERA*"<<endl<<"\n";
    }
};
while (i < 2){
    cout<<"Podaj b (moze byc ulamek ale nie liczba ujemna): ";
    cin>>b;
    if (b >= 0){
        i = i + 1;
        cout<<"Liczba b przyjeta."<<endl<<"\n";
    }
    else{
        cout<<"*LICZBA MUSI BYC WIEKSZA OD ZERA*"<<endl<<"\n";
    }
};
p = a * b;
cout<<"\nPole wynosi: "<<p;
}
