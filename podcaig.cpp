#include <iostream>
using namespace std;

char A[] = "ABRSFBORGSNIDFMSOAFBGNETGRIFNIREYJNBSDF";//lista charow A
char B[] = "UKRYTRIFNIREYJNBSTHDBRHFDHMD";//lista charow B

constexpr int lenA = sizeof(A) / sizeof(A[0]);//dlugosc a
constexpr int lenB = sizeof(B) / sizeof(B[0]);//dlugosc b

int main() {
    int C[lenA+1][lenB+1];

    for (int i=0; i < lenA; ++i) {
        char a_char = A[i];
        for (int j = 0; j < lenB; ++j) {
            char b_char = B[j];
            if (a_char == b_char) {
                C[i+1][j+1] = C[i][j]+1;
            }
            else{
                C[i+1][j+1] = max(C[i+1][j], C[i][j+1]);
            }
        }
    }

    int a = lenA;//przygotowanie do szukania znakow od konca
    int b = lenB;
    string result;

    while (a > 0 and b > 0) {//szukanie znakow ktore zwiekszyly wynik
        char a_char = A[a - 1];
        char b_char = B[b - 1];
        if (a_char == b_char) {
            a--;
            b--;
            result.append(&a_char,1);//dodawanie jednego znaku do stringa wynikowego
        }
        else if (C[a - 1][b] > C[a][b - 1]) {
            a --;
        }
        else{
            b--;
        }
    }

    string wynik(result.rbegin(), result.rend()); // odwrocenie stringa
    cout<<wynik;
    return 0;
}
