#include <iostream>

using namespace std;

int main(void)
{
    int A;

    cout << "Insira o valor de [A]: "; cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    if (A % 2 == 0)
    {
        cout << "Par";
    }
    else
    {
        cout << "Impar";
    }

    cout << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
