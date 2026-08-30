#include <iostream>

using namespace std;

int main(void)
{
    float N1, N2, N3, N4, M;

    cout << "Insira a nota [1]: "; cin >> N1;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira a nota [2]: "; cin >> N2;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira a nota [3]: "; cin >> N3;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira a nota [4]: "; cin >> N4;
    cin.ignore(80, '\n');
    cout << endl;

    M = (N1 + N2 + N3 + N4) / 4;

    if (M >= 5)
    {
        cout << "Aprovado";
    } else {
        cout << "Reprovado";
    }

    cout << endl;
    cout << "A media do aluno foi...: " << M;


    cout << endl;
    cout << "Aperter <Enter> para encerrar... ";
    cin.get();

    return 0;
}
