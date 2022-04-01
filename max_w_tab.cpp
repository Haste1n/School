#include <iostream>
using  namespace std;

const int m = 8;
int tab[m] = {1, 10, 6, 2, 8, -1, 0, 4};

void wprowadz(){
    for (int i = 0; i < m; i++){
        cout<<"Podaj liczbe "<<i+1<<": ";
        cin>>tab[i];
    }
}

int maks(){
    int naj = tab[0];
    for (int i = 0; i < m; i++){
        if (tab[i] > naj){
            naj = tab[i];
        }
    }
    return naj;
}

int main(){
    //wprowadz();
    cout<<"Najwieksza: "<<maks();
    return 0;
}
