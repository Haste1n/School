#include <iostream>
using namespace std;

main (){
int a, b, c;
cout<<"Program po wprowadzeniu bokow stewierdza czy taki trojkat jest mozliwy."<<endl;
cout<<"Wprowadz a: ";
cin>>a;
cout<<"Wprowadz b: ";
cin>>b;
cout<<"Wprowadz c: ";
cin>>c;
if (a + b > c, a + c > b, b + c > a){
    cout<<"Mozna zbudowac trojkat.";
}
else {
  cout<<"Nie mozna zbudowac trojkata.";
};
}
