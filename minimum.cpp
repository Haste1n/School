#include <iostream>
using  namespace std;

int minimum(int n){
    int minimum, x;
    for (int i = 0; i < n; i++){
        cout<<"Podaj liczbe "<<i + 1<<": ";
        cin>>x;
        if (i != 0){
            if (x < minimum)
                minimum = x;
        }
        else minimum = x;
    }
    return minimum;
}

int main(){
    int n;
    cout<<"Podaj ilosc liczb: ";
    cin>>n;
    cout<<"Najmniejsza: "<<minimum(n);
    return 0;
}
