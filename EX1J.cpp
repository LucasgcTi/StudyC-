#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int A, B, R;

    cout << "Insira o valor de <A>...: "; cin >> A;
    cin.ignore(80, '\n');

    cout << "Insira o valor de <B>...: "; cin >> B;
    cin.ignore(80, '\n');

    R = pow(A - B, 2);

    cout << "O valor da difenrenca do quadrado entre A e B...: " << R << endl << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
