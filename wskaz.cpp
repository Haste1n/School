#include <iostream>
using namespace std;

int main(){
    int *tab = new int [3];
    for(int i = 0; i < 3; i++){
        cin>>tab[i];
    }
    for(int i = 0; i < 3; i++){
        cout<<tab[i]<<" ";
    }
    tab = &tab[0];
    cout<<endl<<tab;
    cout<<endl<<*tab<<endl;
    for(int i = 0; i < 3; i++){
        cout<<&tab[i]<<" ";
    }
    delete[] tab;
    return 0;
}
