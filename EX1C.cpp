#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float VOLUME, ALTURA, r;

    cout << "Insira a Altura da lata de oleo..: ";
    cin >> ALTURA;
    cin.ignore(80, '\n');

    cout << "Insira o valor de R..: ";
    cin >> r;
    cin.ignore(80, '\n');
    cout << endl;

    VOLUME = 3.14159 *pow(r, 2) * ALTURA;

    cout << "O valor do volume e...: " << VOLUME;
    cout << endl;

    cout << "Insira <Enter> para encerrar... ";
    cin.get();

    return 0;
}
