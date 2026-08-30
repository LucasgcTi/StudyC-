#include <iostream>

using namespace std;

int main(void)
{
    float N1, N2, N3, N4, MD1, NE, MD2;

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

    MD1 = (N1 + N2 + N3 + N4) / 4;

    if (MD1 >= 7)
    {
        cout << "Aprovado";

        cout << ", A medida do aluno foi...: " << MD1;
    }
    else
    {
        cout << "Insira a nota do Exame: "; cin >> NE;
        cin.ignore(80, '\n');
        cout << endl;

        MD2 = (MD1 + NE) / 2;

        if (MD2 >= 5)
        {
            cout << "Aprovado em exame";
            cout << endl;

            cout << "A medida do aluno foi...: " << MD2;
        }
        else
        {
            cout << "Reprovado";
        }
    }

    cout << endl;
    cout << "Aperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
