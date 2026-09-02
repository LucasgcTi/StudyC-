#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C, R;

    cout << "Insira o valor de [A]: "; cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de [B]: "; cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de [C]: "; cin >> C;
    cin.ignore(80, '\n');
    cout << endl;

    R = A + B + C;

    if (R >= 100)
    {
        cout << "Resultado: " << R;
    }

    cout << "\nAperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
