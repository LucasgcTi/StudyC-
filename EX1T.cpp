#include <iostream>

using namespace std;

int main(void)
{
    float VELOCIDADE, DISTANCIA, TEMPO;

    cout << "Digite a Distancia...: "; cin >> DISTANCIA;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Digite o Tempo...: "; cin >> TEMPO;
    cin.ignore(80, '\n');
    cout << endl;

    VELOCIDADE = (DISTANCIA * 1000) / (TEMPO * 60);

    cout << "O valor da velocidade foi...: " << VELOCIDADE;

    cout << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
