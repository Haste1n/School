#include <iostream>
using namespace std;

int euklides(int a, int b){
    int r;
    if(b==0) return a;
    else{
        r=a%b;
        return euklides(b, r);
    }

}

int potega(int p, int w){
    if(w==0) return 1;
    else return potega(p, w-1) * p;
}

int silnia(int n){
    if(n==0) return 1;
    else return silnia(n-1)*n;
}

int fibonacci(int n){

    if(n==1||n==2) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    cout<<euklides(63, 28)<<endl;
    cout<<potega(3, 4)<<endl;
    cout<<silnia(5)<<endl;
    cout<<fibonacci(6)<<endl;
    return 0;
}
