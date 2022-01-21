#include <iostream>
using namespace std;

int main(){
int n, suma, a;
suma = 0;
cout<<"Program po podaniu ilosci liczb liczy ich sume."<<endl;
cout<<"Podaj ilosc liczb: ";
cin>>n;
for (int i = 1; i <= n; i++){
    cout<<"Podaj liczbe: ";
    cin>>a;
    suma += a;
}
cout<<"Suma rowna jest "<<suma<<".";
return 0;
}
