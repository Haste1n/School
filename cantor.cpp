#include <iostream>
#include <cmath>
using namespace std;

void cantor(int size){
    int k, x, in, n = pow(3, size);//szerokosc wzoru
    for(int d=0; d<=size; d++, putchar('\n')){//ilosc linii
        for(int i=0; i<n; i++, putchar("* "[in])){//pojedyncze znaki
            for(x=3*i, in=0, k=0; k<d; x%=n, x*=3, k++){//sprawdzanie kazdego znaku
                if(x/n==1){
                    in=1;//jezeli warunek spelniony to zmien in na 1
                }
            }
        }
    }
}

int main(){
    cantor(3);
    return 0;
}
