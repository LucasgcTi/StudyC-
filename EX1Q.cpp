#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float A, R;

    cout << "Insira o valor do raio...: "; cin >> R;
    cin.ignore(80, '\n');
    cout << endl;

    A = 3.14159265 * pow(R, 2);

    cout << "Valor area: " << A;
    cout << endl << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
