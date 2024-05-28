#include <iostream>
using namespace std;

int main(){
    int n=11, k=3, j, id=0, last;
    int tab[n];
    for(int i=0; i<n; i++){
        tab[i]=1;
    }
    for(int i=0; i<n; i++){
        j=0;
        while(j<k-1||tab[id%n]!=1){
            if(tab[id%n]==1){
                j++;
            }
            id++;
        }
        tab[id%n]=0;
        last=(id%n)+1;
    }
    cout<<last;
    return 0;
}
