#include <iostream>
using namespace std;

int zamiany(int tab[], int l, int p)
{
    int pivot=tab[l];
    int licznik=0;
    for(int i=l+1; i<=p; i++){
        if(tab[i]<=pivot)
            licznik++;
    }

    int pivotID=l+licznik;
    int temp=tab[pivotID];
    tab[pivotID]=tab[l];
    tab[l]=temp;

    while(l<pivotID && p>pivotID){
        while(tab[l]<=pivot){
            l++;
        }
        while(tab[p]>pivot){
            p--;
        }
        if(l<pivotID && p>pivotID){
            temp=tab[l];
            tab[l]=tab[p];
            tab[p]=temp;
            l++;
            p--;
        }
    }
    return pivotID;
}

void sortowanie(int tab[], int l, int p)
{
    if(l>=p)
        return;
    int pivotID=zamiany(tab, l, p);
    sortowanie(tab, l, pivotID-1);
    sortowanie(tab, pivotID+1, p);
}

int main()
{
    int N = 10;
    int tab[N] = {9, 12, 3, 6, 1, 4, 8, 11, 7, 22};
    sortowanie(tab, 0, N - 1);
    for(int i=0; i<N; i++){
        cout<<tab[i]<<" ";
    }
    return 0;
}
