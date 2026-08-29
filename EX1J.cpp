#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int A, B, R;

    cout << "Informe o valor de <A>..: "; cin >> A;
    cin.ignore(80, '\n');

    cout << "Informe o valor de <B>..: "; cin >> B;
    cin.ignore(80, '\n');

    R = pow(A - B, 2);


    cout << "O quadrado da diferenca foi: " << R;
    cout << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
