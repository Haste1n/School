#include <iostream>
using namespace std;

main()
{
    float a, liczba_odwrotna;

	for ( ; a != 0; )
	{
	    cout << "Wprowadz liczbe: ";
		cin >> a;
	    liczba_odwrotna = 1 / a;
	    cout << "Liczba odwrotna dla " << a << " to: " << liczba_odwrotna << endl;
	}


	return 0;
}
