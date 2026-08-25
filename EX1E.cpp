#include <iostream>

using namespace std;

int main(void)
{
    float PRESTACAO, TEMPO, VALOR, TAXA;

    cout << "Programa De Calculo de Prestacao" << endl;

    cout << "Diga o Tempo: "; cin >> TEMPO;
    cin.ignore(80, '\n');

    cout << "Diga o Valor: "; cin >> VALOR;
    cin.ignore(80, '\n');

    cout << "Diga a Taxa: "; cin >> TAXA;
    cin.ignore(80, '\n');

    PRESTACAO = VALOR + (VALOR * (TAXA / 100) * TEMPO);

    cout << "O Valor da Prestacao foi: " << PRESTACAO;

    cout << endl;
    cout << "Aperte <Enter> para encerrar... >";
    cin.get();

    return 0;
}
