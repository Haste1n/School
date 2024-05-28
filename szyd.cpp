#include <iostream>
using namespace std;

int flawiusz(int n, int k){
    if(n==1){
        return 1;
    }
    return ((flawiusz(n-1, k)+k-1)%n)+1;
}

int main(){
    int n=11, k=3;
    cout<<flawiusz(n, k);
    return 0;
}
