#include <iostream>

using namespace std;

int main(void)
{
    float  TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS;

    cout << "Informe o tempo da viagem:  "; cin >> TEMPO;
    cin.ignore(80, '\n');

    cout << endl;

    cout << "Informe a velocidade que o carro chegou: ";cin >> VELOCIDADE;
    cin.ignore(80, '\n');

    DISTANCIA = TEMPO * VELOCIDADE;

    cout << "A Distancia percorrida foi " << DISTANCIA; cout << endl;

    LITROS_USADOS = DISTANCIA / 12;

    cout << "E usou: " << LITROS_USADOS << " Litros de combustivel."; cout << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
