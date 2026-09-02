#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string NOME, SEXO, MASCULINO, FEMININO;

    cout << "Digite seu nome: "; cin >> NOME;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Digite seu sexo [M]: Masculino | [F]: Feminino : "; cin >> SEXO;
    cin.ignore(80, '\n');
    cout << endl;

    if (SEXO == "M")
    {
        cout << "Ilmo. Sr. " << NOME;
    }
    else if (SEXO == "F")
    {
        cout << "Ilmo. Sra. " << NOME;
    }
    else
    {
        cout << "Sexo informado invalido";
    }

    cout << "\nAperte <Enter> para encerrar... ";
    cin.get();

    return 0;

}
