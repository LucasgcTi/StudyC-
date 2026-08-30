#include <iostream>

using namespace std;

int main(void)
{
    int N;

    cout << "Insira o Valor de [N]...: "; cin >> N;
    cin.ignore(80, '\n');
    cout << endl;

    if (N < 0)
    {
        N = N * -1;
    }

    cout << "Resultado...: " << N;
    cout << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
