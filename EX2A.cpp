#include <iostream>

using namespace std;

int main(void)
{
    int A, B, D;

    cout << "Insira o valor de [A]: "; cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de [B]: "; cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    if (A > B)
    {
        D = A - B;
    } else
    {
        D = B - A;
    }

    cout << "Resultado: " << D;
    cout << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
