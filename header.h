#include <iostream>
using namespace std;

class Pytanie{
    public:

    string tresc;
    string a, b, c, d;
    int id;
    string poprawna, podana;
    int punkt;

    void czytanie();
    void wywolanie();
    int sprawdz();
};
