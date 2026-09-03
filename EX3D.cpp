#include <iostream>

using namespace std;

int main(void)
{
    int soma = 0;

    for (int i = 0; i <= 500; i++)
    {
    if (i % 2 == 0)
    {
        soma += i;
    }
    }

    cout << "Somatorio: " << soma << endl;

    cout << "\nAperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
