#include <iostream>
#include  <windows.h>
using namespace std;

const int N=6;
int dane[N];
int roz=0;
void wyswietl_stos(){
    cout<<"<-- ";
    for(int i=roz-1; i>=0; i--){
        cout<<dane[i]<<", ";
    }
    cout<<endl;
}

void push(){
    if(roz>N-1){
        cout<<"Stos jest pelny."<<endl;
    }
    else{
        cout<<"Podaj liczbe do dodania na stos: ";
        cin>>dane[roz];
        roz++;
    }
}

void pop(){
    if(roz>=1){
        cout<<"Usuwasz liczbe: "<<dane[roz-1]<<endl;
        roz--;
    }
    else{
        cout<<"Stos jest pusty."<<endl;
    }

}
void size(){
    cout<<"Stos ma: "<<roz<<" elementow."<<endl;
}
void empty(){
    if(roz==0){
        cout<<"Stos jest pusty."<<endl;
    }
    else{
        cout<<"Stos nie jest pusty."<<endl;
    }
}

int main(){
    /*push();
    wyswietl_stos();
    size();
    pop();
    wyswietl_stos();
    size();
    empty();*/
    int wybor=0;
    do{
        Sleep(250);
        cout<<endl;
        wyswietl_stos();
        cout<<"Menu Glowne Stosu"<<endl;
        cout<<"1 - push"<<endl<<"2 - pop"<<endl<<"3 - size"<<endl<<"4 - empty"<<endl<<"5 - exit"<<endl;
        cout<<"Akcja: ";
        cin>>wybor;
        cout<<endl;
        if(wybor==1){
            push();
        }
        else if(wybor==2){
            pop();
        }
        else if(wybor==3){
            size();
        }
        else if(wybor==4){
            empty();
        }
        else if(wybor==5){
            continue;
        }
        else{
            cout<<"Wybierz jedna z opcji."<<endl;
        }
    }while(wybor!=5);
    return 0;
}
