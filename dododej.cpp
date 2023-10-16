#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,i=1,j=0,wynik=0,k,c,d;
    cin>>a;
    cin>>b;
    if(b>a){
        c=b;
        b=a;
        a=c;
    }
    while(pow(10,i-1)<a){
        c=pow(10,i);
        d=pow(10,i-1);
        k=((a%c)-(a%d))/d+((b%c)-(b%d))/d+j;
        j=0;
        if(k==1){
            wynik+=d;
        }
        if(k==2){
            j=1;
        }
        if(k==3){
            j=1;
            wynik+=d;
        }
        i++;
    }
    if(j==1){
        wynik+=pow(10,i-1);
    }
    cout<<endl<<wynik;
    return 0;
}
