#include <iostream>

using namespace std;

int main(void)
{
    float dolar, real, conv;

    cout << "Digite o Valor do Dolar..: "; cin >> real;
    cin.ignore(80, '\n');

    cout << "Digite o quantidade de dolares a ser convertido...: "; cin >> dolar;
    cin.ignore(80, '\n');

    conv = real * dolar;

    cout << "O valor da convercao...: " << conv;

    cout << endl << endl;

    cout << "Aperte <enter> para encerrar... ";
    cin.get();

    return 0;
}
