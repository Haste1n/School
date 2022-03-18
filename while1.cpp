#include <iostream>
using namespace std;

int main (){
int i, a = 1, n;
cout<<"Podaj ilosc liczb: ";
cin>>n;
cout<<"\nFor"<<endl;
for (i = 1; i <= n; i++){
    a = i * (i + 1);
    cout<<"\nIloczyn "<<i<<" * "<<i + 1<<": "<<a;
}
i = 1;
cout<<"\n\nWhile"<<endl;
while (i <= n){
    a = i * (i + 1);
    cout<<"\nIloczyn "<<i<<" * "<<i + 1<<": "<<a;
    i++;
}
return 0;
}
