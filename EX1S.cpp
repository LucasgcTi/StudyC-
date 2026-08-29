#include <iostream>

using namespace std;

int main(void)
{
    float A, B, Ra, Rs, Rd, Rm;

    cout << "Insira o Valor de [A]...: "; cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira o Valor de [B]...: "; cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    Ra = A + B;
    Rs = A - B;
    Rd = A / B;
    Rm = A * B;

    cout << "O resultado das 4 operacacoes foi: " << endl;
    cout << "[+]: " << Ra << endl;
    cout << "[-]: " << Rs << endl;
    cout << "[/]: " << Rd << endl;
    cout << "[*]: " << Rm << endl;

    cout << endl << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
