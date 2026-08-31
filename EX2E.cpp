#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    double A, B, C, D, X1, X2, X;

    cout << "Insira o valor de [A]: "; cin >> A;
    cout << endl;

    if (A == 0)
    {
        cout << "[A] nao pode ser 0, em equacao de 2 grau";

        cout << "Aperte <Enter> para encerrar... ";
        cin.clear();
        cin.get();

        return 1;
    }

    cout << "Insira o valor de [B]: "; cin >> B;
    cout << endl;

    cout << "Insira o valor de [C]: "; cin >> C;
    cout << endl;

    D = (pow(B, 2) - (4 * A * C));

    if (D > 0)
    {
        X1 = (-B + sqrt(D)) / (2 * A);
        X2 = (-B - sqrt(D)) / (2 * A);

        cout << "2 raizes real: " << X1 << ", " << X2;
    }
    else if (D == 0)
    {
        X = -B / (2 * A);

        cout << "1 raiz real: " << X;
    }
    else
    {
        cout << "Não existe raiz real";
    }

    cout << endl;
    cout << "Aperte <Enter> para encerrar... ";
    cin.clear();
    cin.get();

    return 0;
}
