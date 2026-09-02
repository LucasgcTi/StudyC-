#include <iostream>


using namespace std;

int main(void)
{
    int I;

    for (I = 15; I <= 200; I++)
    {
        cout << "Quadrado de I: " << I << " = " << (I * I) << endl;
    }

    cout << "\nAperte <Enter> para encerrar... ";
    cin.get();

    return 0;
}
