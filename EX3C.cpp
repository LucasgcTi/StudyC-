#include <iostream>

using namespace std;

int main(void)
{
    for (int i = 0; i <= 99; i++)
    {
        cout << "Soma: " << (i + 1) << '\n';
    }

    cout << "\nAperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
