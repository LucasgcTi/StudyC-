#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C, X;

    cout << "Insira o valor de [A]: "; cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de [B]: "; cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de [C]: "; cin >> C;
    cin.ignore(80, '\n');
    cout << endl;

    if (A > B)
    {
        X = A;
        A = B;
        B = X;
    }

    if (B > C)
    {
        X = B;
        B = C;
        C = X;
    }

    if (A > B)
    {
        X = A;
        A = B;
        B = X;
    }

    cout << "A ordem ficou: " << A << ", " << B << ", " << C;
    cout << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
