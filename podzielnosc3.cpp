
#include <iostream>
using namespace std;

int main(){
int n, a, ilosc=0;
cout<<"Podaj liczbe powtozen: ";
cin>>n;
for (int i = 1; i <= n; i++){
    cout<<"Podaj liczbe "<<i<<": ";
    cin>>a;
    if (a%3==0){
        ilosc += 1;
        //cout<<"*LICZBA PODZIELNA PRZEZ TRZY*"<<endl;
    };
};
cout<<"Podane bylo liczb podzielnych przez trzy: "<<ilosc;
return 0;
}
