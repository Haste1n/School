#include <iostream>
using namespace std;

void porownaj(int M, int tab[], int duze[], int male[]){
    for (int i = 0; i < M-1; i+=2){
        if (tab[i] > tab[i + 1]){
            duze[i / 2] = tab[i];
            male[i / 2] = tab[i + 1];
        }
        else{
            duze[i / 2] = tab[i + 1];
            male[i / 2] = tab[i];
        }
    }
}
void wprowadz(int M, int tab[]){
    for (int i = 1; i <= M; i++){
        cout<<"Podaj liczbe "<<i<<": ";
        cin>>tab[i - 1];
    }
}

void wypisz(int M, int duze[], int male[]){
    for (int i = 1; i <= M/2; i++){
        if (duze[i - 1] == male[i - 1]){
            cout<<"\n"<<duze[i - 1]<<" = "<<male[i - 1];
        }
        else{
        cout<<"\n"<<duze[i - 1]<<" > "<<male[i - 1];
        }
    }
}

void maxmin(int M, int tab[], int duze[], int male[]){
    int najmax = duze[0], najmin = male[0];
    for (int i = 1; i < M/2; i++){
        if (duze[i] > najmax) najmax = duze[i];
        if (male[i] < najmin) najmin = male[i];
    }
    if (tab[M - 1] > najmax) najmax = tab[M - 1];
    if (tab[M - 1] < najmin) najmin = tab[M - 1];
    cout<<"\n\nNajmniejsze: "<<najmin;
    cout<<"\nNajwieksze: "<<najmax<<endl;
}

int main(){
    int a;
    cout<<"Podaj dlugosc tablicy: ";
    cin>>a;
    const int M = a;
    int tab[M];
    int male[M/2], duze[M/2];
    wprowadz(M, tab);
    porownaj(M, tab, duze, male);
    wypisz(M, duze, male);
    maxmin(M, tab, duze, male);
    return 0;
}
