#include <iostream>
using namespace std;

void merge(int* tab, int l, int m, int r){
    int lSize = m - l + 1;
    int rSize = r - m;
    int tabL[lSize];
    int* tabR = new int [rSize];
    for(int i = 0; i < lSize; i++){
        tabL[i] = tab[l + i];
    }
    for(int j = 0; j < rSize; j++){
        tabR[j] = tab[m + 1 + j];
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = l;
    while(i < lSize && j < rSize) {
        if(tabL[i] <= tabR[j]) {
            tab[k] = tabL[i];
            i++;
        }
        else{
            tab[k] = tabR[j];
            j++;
        }
        k++;
    }
    while(i < lSize) {
        tab[k] = tabL[i];
        i++;
        k++;
    }

    while(j < rSize) {
        tab[k] = tabR[j];
        j++;
        k++;
    }
    delete[] tabR;
}


int mergeSort(int tab[], int l, int r){
    if(l < r) {
        int m = l + (r - l) / 2;
        mergeSort(tab, l, m);
        mergeSort(tab, m + 1, r);
        merge(tab, l, m, r);
    }
}


int main(){
    int n, l = 0, r;
    cout<<"Podaj dlugosc tablicy: ";
    cin>>n;
    r = n-1;
    int tab[n];
    for(int i = 0; i < n; i++){
        cout<<"Podaj liczbe "<<i+1<<": ";
        cin>>tab[i];
    }
    cout<<"Przed posortowaniem: ";
    for(int i = 0 ; i < n; i++){
        cout<<tab[i]<<", ";
    }
    mergeSort(tab, l, r);
    cout<<endl<<"Po posortowaniu: ";
    for(int i = 0 ; i < n; i++){
        cout<<tab[i]<<", ";
    }
    return 0;
}
