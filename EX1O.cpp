#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C, D, P, S;

    cout << "Insira o valor de <A>...: "; cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de <B>...: "; cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de <C>...: "; cin >> C;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de <D>...: "; cin >> D;
    cin.ignore(80, '\n');
    cout << endl;

    P = A * C;
    S = B + D;

    cout << "O valor do Produto entre: " << A << " e " << C << " : " << P << endl;
    cout << "O Valor da Soma entre: " << B << " e " << D << " : " << S << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
