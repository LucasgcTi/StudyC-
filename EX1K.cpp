#include <iostream>

using namespace std;

int main(void)
{
    float real, cotacao, conv;

    cout << "Digite o valor do dolar: "; cin >> cotacao;
    cin.ignore(80, '\n');

    cout << endl;

    cout << "Digite a quantidade de reais: "; cin >> real;
    cin.ignore(80, '\n');

    cout << endl;

    conv = real / cotacao;

    cout << "A conversao de: " << real << " para: " << cotacao << " Ficou: " << conv;

    cout << endl << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
