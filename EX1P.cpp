#include <iostream>

using namespace std;

int main(void)
{
    float SM, PR, NS;

    cout << "Insira seu salario mensal...: "; cin >> SM;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o percentual do reajuste...: "; cin >> PR;
    cin.ignore(80, '\n');
    cout << endl;

    NS = SM + (SM * (PR / 100));

    cout << "O Salario atual foi atualizado para...: " << NS;

    cout << endl;
    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
