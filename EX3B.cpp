#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;

    cout << "{------TABUADA------}\n";

    while (true){

        cout << "\nInsira o numero desjeado para tabuada | [1] para encerrar: "; cin >> N;
        cin.ignore(80, '\n');

        if (N == 1)
        {
            break;
        }

        for (int i = 1; i <=10; i++)
        {
            cout << "Resultado: " << N << " * " << i << " = " << N * i << "\n";
        }

    }

    cout << "\nAperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
