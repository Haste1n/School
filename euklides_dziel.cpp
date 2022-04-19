#include <iostream>
using namespace std;

int main()
{
    int a, b, k;
    cout<<"Program po otrzymajniu 2 liczb podaje ich najwiekszy wspolny dzielnik."<<endl;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    while (b != 0){
        k = b;
        b = a%b;
        a = k;
    }
    cout<<"NWD: "<<a;
}
