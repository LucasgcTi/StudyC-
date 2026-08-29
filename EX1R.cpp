#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C, QB, QN;
    int vv, tel;
    float pa, pb, pc, pqb, pqn, pvv;

    cout << "Insira a quantidade de votos para o candidadto A: "; cin >> A;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira a quantidade de votos para o candidadto B: "; cin >> B;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira a quantidade de votos para o candidadto C: "; cin >> C;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira a quantidade de votos branco: "; cin >> QB;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Insira a quantidade de votos nulos: "; cin >> QN;
    cin.ignore(80, '\n');
    cout << endl;

    vv = A + B + C;
    tel = vv + QB + QN;

    pa = (A * tel) / 100;
    pb = (B * tel) / 100;
    pc = (C * tel) / 100;
    pqb = (QB * tel) / 100;
    pqn = (QN * tel) / 100;
    pvv = (vv * tel) /100;

    cout << "Percentual Candidato A: " << pa << "% ";
    cout << "Percentual Candidato B: " << pb << "% ";
    cout << "Percentual Candidato C: " << pc << "% ";
    cout << "Percentual votos em branco: " << pqb << "% ";
    cout << "Percentual votos nulos: " << pqn << "% ";
    cout << "Percentual votos validos: " << pvv << "% ";

    cout << endl << endl;

    cout << "Aperter <Enter> para encerrar... ";
    cin.get();

    return 0;
}
