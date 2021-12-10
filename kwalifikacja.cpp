#include <iostream>
using namespace std;

int main(){
float p;
cout<<"Program sprawdza gdzie uczen sie zakwalifikuje."<<endl;
cout<<"Podaj liczbe punktow: ";
cin>>p;
if (p >= 0 and p <= 60) {
    if (p < 30) {
        cout<<"Grupa podstawowa.";
    }
    else {
        cout<<"Grupa zaawansowana.";
    }
}
else {
    cout<<"Wprowadzono liczbe spoza zakresu";
}
}
