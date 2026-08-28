#include <iostream>
#include <cmath>


using namespace std;

int main(void)
{
    int BASE, EXPOENTE, POTENCIA;

    cout << "Insira a base...: "; cin >> BASE;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o expoente...: "; cin >> EXPOENTE;
    cin.ignore(80, '\n');
    cout << endl.

    POTENCIA = pow(BASE, EXPOENTE);

    cout << "O valor da potencia foi...: " << POTENCIA;
    cout << endl << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
