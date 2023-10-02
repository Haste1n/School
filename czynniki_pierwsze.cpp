#include <iostream>
#include <fstream>
using namespace std;

main(){
    fstream wej;
    wej.open("przyklad.txt", ios::in);
    int x=0, y=0, i=2, a1, b1, a2=0, b2=0, linia, a;
    for(int j=0; j<200; j++){
        wej>>linia;
        a = linia;
        while(a>1){
            while(a%i==0){
                a/=i;
                y++;
            }
            if(y!=0){
                x++;
            }
            i++;
        }
        if(y>a2){
            a2=y;
            a1=linia;
        }
        if(x>b2){
            b2=x;
            b1=linia;
        }
        x=0;
        y=0;
        i=2;
    }
    cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2;
    return 0;
}
