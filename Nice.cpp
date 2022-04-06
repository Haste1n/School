#include <iostream>
using namespace std;

const int M = 6;
int tab[M];
int male[M/2], duze[M/2];

void porownaj(){
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
void wprowadz(){
    for (int i = 1; i <= M; i++){
        cout<<"Podaj liczbe "<<i<<": ";
        cin>>tab[i - 1];
    }
}

void wypisz(){
    for (int i = 1; i <= M/2; i++){
        if (duze[i - 1] == male[i - 1]){
            cout<<"\n"<<duze[i - 1]<<" = "<<male[i - 1];
        }
        else{
        cout<<"\n"<<duze[i - 1]<<" > "<<male[i - 1];
        }
    }
}

void maxmin(){
    int najmax = duze[0], najmin = male[0];
    for (int i = 1; i < M/2; i++){
        if (duze[i] > najmax) najmax = duze[i];
        if (male[i] < najmin) najmin = male[i];
    }
    cout<<"\n\nNajmniejsze: "<<najmin;
    cout<<"\nNajwieksze: "<<najmax<<endl;
}

int main(){
    wprowadz();
    porownaj();
    wypisz();
    maxmin();
    return 0;
}
