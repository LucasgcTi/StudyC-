#include <iostream>

using namespace std;

int main(void)
{
    int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, a, b, c, d;

    cout << "Leia o valor <A>...: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Leia o valor <B>...: "; cin >> b;
    cin.ignore(80, '\n');

    cout << "Leia o valor <C>...: "; cin >> c;
    cin.ignore(80, '\n');

    cout << "Leia o valor <D>...: "; cin >> d;
    cin.ignore(80, '\n');

    r1 = a + b;
    r2 = a + c;
    r3 = a + d;
    r4 = b + c;
    r5 = b + d;
    r6 = c + d;
    r7 = a * b;
    r8 = a * c;
    r9 = a * d;
    r10 = b * c;
    r11 = b * d;
    r12 = c * d;

    cout << "o Resultado das adicoes e multiplicacoes foi: " << r1 << ", " << r2 << ", " << r3 << ", " << r4 << ", "
    << r5 << ", " << r6 << ", " << r7 << ", " << r8 << ", " << r9 << ", " << r10 << ", " << r11 << ", " << r12;
    cout << endl;


    cout << endl;
    cout << "Aperte <Enter> para encerrar... ";
    cin.ignore(80, '\n');

    return 0;
}
