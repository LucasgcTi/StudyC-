#include <iostream>

using namespace std;

int main(void)
{

    float c, f;

    cout << "Insira a temperatura em Celsius: ";
    cin >> c;
    cin.ignore(80, '\n');

    f = c * 9 / 5 + 32;

    cout << "Celsius: " << c << " Fahrenheit: " << f;
    cout << endl;

    cout << "Tecla <Enter> para encerrar... ";
    cin.get();

    return 0;

}
