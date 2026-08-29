#include <iostream>
#include <cmath>


using namespace std;

int main(void)
{
    float BASE, INDICE, RAIZ;

    cout << "Insira a base...: "; cin >> BASE;
    cin.ignore(80, '\n');
    cout << endl << endl;

    cout << "Insira o Indice...: "; cin >> INDICE;
    cin.ignore(80, '\n');
    cout << endl;

    RAIZ = pow(BASE, 1.0 / INDICE);

    cout << "A raiz e...: " << RAIZ;
    cout << endl << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
