#include <iostream>
using namespace std;

int main()
{
    int sw, so, i;
    float p;
    cout<<"Program po podaniu liczby samochodow i procent samochodow osobowych oddaje liczbe samochodow osobowych."<<"\n";
    while (i == 0){
        cout<<"Podaj liczbe samochodow: " ;
        cin>>sw;
        if (sw < 1){
            cout<<"*Podaj liczbe wieksza od zera*"<<"\n";
        }
        else if (sw > 0){
            i = i + 1;
        }
    }
    cout<<"Podaj procent samochodow osobowych: ";
    cin>>p;
    so = (p * sw) / 100;
    cout<<"Liczba samochodow osobowych: "<<so;

}
