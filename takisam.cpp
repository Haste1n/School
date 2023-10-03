#include <iostream>
#include <fstream>
#include <string>
using namespace std;

main(){
    fstream wej("liczby.txt", ios::in);
    int licznik=0;
    string linia, a=" ";
    for(int i=0; i<200; i++){
        wej>>linia;
        if(linia[0]==linia[linia.length()-1]){
            licznik++;
            if(a==" "){
                a=linia;
            }
        }
    }
    cout<<licznik<<" "<<a;
    return 0;
}
