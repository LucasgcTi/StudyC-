#include <iostream>

using namespace std;

int main(void)
{
    float VOLUME, COMPRIMENTO, LARGURA, ALTURA;

    cout << "Digite o comprimento...: "; cin >> COMPRIMENTO;
    cin.ignore(80, '\n');

    cout << "Digite o Largura...: "; cin >> LARGURA;
    cin.ignore(80, '\n');

    cout << "Digite a Altura...: "; cin >> ALTURA;
    cin.ignore(80, '\n');

    VOLUME = COMPRIMENTO * LARGURA * ALTURA;

    cout << "O Volume da caixa retangular é...: " << VOLUME;

    cout << endl;
    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
