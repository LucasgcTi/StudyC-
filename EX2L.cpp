#include <iostream>

using namespace std;

int main(void)
{
    int N;

    cout << "Insira o valor de [N]: "; cin >> N;
    cin.ignore(80, '\n');
    cout << endl;

    if (!(N > 3))
    {
        cout << N;
    }

    cout << "\nAperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
