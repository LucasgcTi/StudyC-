#include <iostream>

using namespace std;

int main(void)
{
    int N, SUCESSOR, ANTECESSOR;

    cout << "Insira o valor de [N]..: "; cin >> N;
    cin.ignore(80, '\n');

    SUCESSOR = N + 1;
    ANTECESSOR = N - 1;

    cout << "O Antecessor de " << N << " : " << ANTECESSOR << " e o sucessor: " << SUCESSOR;
    cout << endl << endl;

    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
