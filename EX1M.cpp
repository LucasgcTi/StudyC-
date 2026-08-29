#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int A, B, C, R;

    cout << "Insira o valor de <A>..: "; cin >> A;
    cin.ignore(80, '\n');

    cout << endl;

    cout << "Insira o valor de <B>..: "; cin >> B;
    cin.ignore(80, '\n');

    cout << endl;

    cout << "Insira o valor de <C>..: "; cin >> C;
    cin.ignore(80, '\n');

    R = pow(A, 2) + pow(B, 2) + pow(C, 2);

    cout << endl << endl;


    cout << "O resultado da soma dos quadrados e...: " << R;

    cout << endl << endl;

    cout << "Aperte <Enter> para encerrar...: ";
    cin.get();

    return 0;
}
