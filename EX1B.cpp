#include <iostream>

using namespace std;

int main(void)
{
    float f, c;

    cout << "Insira a tempatura em Fahrenheit...: ";
    cin >> f;
    cin.ignore(80, '\n');

    c = ((f-32) * 5) / 9;

    cout << "Celsius: " << c << " Farenheit: " << f;
    cout << endl;

    cout << "Tecla <Enter> para encerrar... ";
    cin.get();

    return 0;
}
