#include <iostream>
using namespace std;

float pole(int xa, int ya, int xb, int yb, int xc, int yc){
    float P = abs(xa*(yb-yc)+xb*(yc-ya)+xc*(ya-yb))/2;
    return P;
}

int main(){
    float xa, ya, xb, yb, xc, yc, x, y, P, P1, P2, P3;
    cout<<"Podaj koordynaty x dla a: ";
    cin>>xa;
    cout<<"Podaj koordynaty y dla a: ";
    cin>>ya;
    cout<<"Podaj koordynaty x dla b: ";
    cin>>xb;
    cout<<"Podaj koordynaty y dla b: ";
    cin>>yb;
    cout<<"Podaj koordynaty x dla c: ";
    cin>>xc;
    cout<<"Podaj koordynaty y dla c: ";
    cin>>yc;
    cout<<"Podaj x punktu: ";
    cin>>x;
    cout<<"Podaj y punktu: ";
    cin>>y;
    P = pole(xa, ya, xb, yb, xc, yc);
    P1 = pole(x, y, xb, yb, xc, yc);
    P2 = pole(xa, ya, x, y, xc, yc);
    P3 = pole(xa, ya, xb, yb, x, y);
    cout<<P<<endl;
    cout<<P1<<endl;
    cout<<P2<<endl;
    cout<<P3<<endl;
    if(P1+P2+P3==P) cout<<"Nalezy do trojkata.";
    else cout<<"Nie nalezy do trojkata.";
    return 0;
}
