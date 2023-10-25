#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream plik("genetyka.txt", ios::in);
    string linia, nowa="", tab[5][2]={{"BD","A"},{"CA","B"},{"CD","B"},{"DD","C"},{"BC","D"}};
    int licznik=0;
    bool x, y;
    while(getline(plik, linia)){
        while(linia.length()>1){
            y=false;
            for(int i=0; i<linia.length(); i+=2){
                x=false;
                for(int j=0; j<5; j++){
                    if(linia.substr(i,2)==tab[j][0]){
                        nowa+=tab[j][1];
                        x=true;
                        break;
                    }
                }
                if(x==false){
                    y=true;
                    break;
                }
            }
            linia=nowa;
            nowa="";
            if(y==true){
                licznik++;
                break;
            }
        }
    }
    cout<<licznik;
    return 0;
}
