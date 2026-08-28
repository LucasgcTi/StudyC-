#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float VOLUME, RAIO;

    cout << "Insira o valor de Raio...: "; cin >> RAIO;
    cin.ignore(80, '\n');
    cout << endl;

    VOLUME = (4/3) * 3.14159 * pow(RAIO, 3);

    cout << "O valor do Volume é: " << VOLUME;

    cout << endl << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
