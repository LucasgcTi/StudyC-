#include <iostream>

using namespace std;

int main(void)
{
    int N;

    cout << "insira o valor de [N]: "; cin >> N;
    cin.ignore(80, '\n');
    cout << endl;

    if (N >=1 && N <= 9)
    {
        cout << "O numero esta na faixa";
    }
    else
    {
        cout << "O numero esta fora da faixa";
    }

    cout << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
