#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C, D, E;
    int MAIOR, MENOR;

    cout << "Insira o Valor de [A]: "; cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o Valor de [B]: "; cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o Valor de [C]: "; cin >> C;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o Valor de [D]: "; cin >> D;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o Valor de [E]: "; cin >> E;
    cin.ignore(80, '\n');
    cout << endl;

    MAIOR = A;
    MENOR = A;

    if (A > MAIOR)
    {
        MAIOR = A;
    }
    if (A < MENOR)
    {
        MENOR = A;
    }

    if (B > MAIOR)
    {
        MAIOR = B;
    }
    if (B < MENOR)
    {
        MENOR = B;
    }

    if (C > MAIOR)
    {
        MAIOR = C;
    }
    if (C < MENOR)
    {
        MENOR = C;
    }

    if (D > MAIOR)
    {
        MAIOR = D;
    }
    if (D < MENOR)
    {
        MENOR = D;
    }

    if (E > MAIOR)
    {
        MAIOR = E;
    }
    if (E < MENOR)
    {
        MENOR = E;
    }

    cout << "Maior: " << MAIOR << " | Menor: " << MENOR;
    cout << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
