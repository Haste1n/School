#include <iostream>
using namespace std;

int main (){
    int lng;
    float s, P;
    cout<<"Wprowadz liczbe nadgodzin: ";
    cin>>lng;
    cout<<"Wprowadz stawke za godzine: ";
    cin>>s;
    if(lng<=30){
        P = lng * s;
    }
    else {
        P = lng * s + (lng - 30)*s*0.5;
    }
    cout<<"Wyplata wynosi: "<<P;
}
