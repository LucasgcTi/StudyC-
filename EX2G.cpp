#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C, D;

    cout << "Insira o valor de [A]: "; cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de [B]: "; cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de [C]: "; cin >> C;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de [D]: "; cin >> D;
    cin.ignore(80, '\n');
    cout << endl;

    if (A % 2 == 0)
    {
        cout << "Divisivel por 2: " << A;
        cout << endl;
    }
    else
    {
        cout << "nao divisivel"
        cout << endl;
    }
    if (A % 3 == 0)
    {
        cout << "Divisivel por 3: " << A;
        cout << endl;
    }
    else
    {
        cout << "nao divisivel";
        cout << endl;
    }

        if (B % 2 == 0)
    {
        cout << "Divisivel por 2: " << B;
        cout << endl;
    }
    else
    {
        cout << "nao divisivel";
        cout << endl;
    }
    if (B % 3 == 0)
    {
        cout << "Divisivel por 3: " << B;
        cout << endl;
    }
    else
    {
        cout << "nao divisivel";
        cout << endl;
    }

        if (C % 2 == 0)
    {
        cout << "Divisivel por 2: " << C;
        cout << endl;
    }
    else
    {
        cout << "nao divisivel";
        cout << endl;
    }
    if (C % 3 == 0)
    {
        cout << "Divisivel por 3: " << C;
        cout << endl;
    }
    else
    {
        cout << "nao divisivel";
        cout << endl;
    }

        if (D % 2 == 0)
    {
        cout << "Divisivel por 2: " << D;
        cout << endl;
    }
    else
    {
        cout << "nao divisivel";
        cout << endl;
    }
    if (D % 3 == 0)
    {
        cout << "Divisivel por 3: " << D;
        cout << endl;
    }
    else
    {
        cout << "nao divisivel";
    }

    cout << "Aperter <Enter> para encerrar... ";
    cin.get();

    return 0;
}
