#include <iostream>
using namespace std;

int main(){
int a, parzyste = 0;
cout<<"Program przyjmuje liczby az do momentu podania liczby zero."<<endl;
do{
    cout<<"Podaj liczbe: ";
    cin>>a;
    if (a % 2 == 0){
        parzyste++;
    }
}while (a != 0);
cout<<"Ilosc liczb parzystych: "<<parzyste - 1;
return 0;
}
