#include <iostream>

using namespace std;

int main(void)
{
    int N, R;

    cout << "Insira o valor de [N]: "; cin >> N;
    cin.ignore(80, '\n');
    cout << endl;

    R = N * 2;

    if (R > 30)
    {
        cout << "Resultado: " << R;
    }

    cout << "\nAperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
