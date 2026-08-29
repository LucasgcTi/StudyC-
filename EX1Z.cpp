#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int A, B, R;

    cout << "Insira o valor de [A]...: "; cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o valor de [B]...: "; cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    R = pow(A / B, 2);

    cout << "O Quadrado da divisao foi...: "; << R;
    cin.get();

    return 0;
}
