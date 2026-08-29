#include <iostream>

using namespace std;

int main(void)
{
    float PES, METROS;

    cout << "Insira a medida em pes...: "; cin >> PES;
    cin.ignore(80, '\n');
    cout << endl;

    METROS = PES * 0.3048;

    cout << "A medida em metros seria...: " << METROS;

    cout << endl << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
