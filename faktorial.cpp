#include <iostream>

using namespace std;
int main()
{
    int x, hasil = 1;

    cout << "Masukkan Bilangan : ";
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        hasil *= i;
    }
    cout << hasil;

    return 0;
}