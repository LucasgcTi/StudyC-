#include <iostream>

using namespace std;

int main(void)
{
    int A, B, X;

    cout << "Insira o Valor de <A>...: "; cin >> A;
    cin.ignore(80, '\n');

    cout << "Insira o Valor de <B>...: "; cin >> B;
    cin.ignore(80, '\n');

    X = A;
    A = B;
    B = X;

    cout << "O Valor de <A> e: " << A << " E o valor de <B> e: " << B;

    cout << endl;
    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
