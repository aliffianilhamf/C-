#include <iostream>
using namespace std;
int main()
{

    int x, y, bilKecil, fpb;
    cout << "masukkan angka pertama : ";
    cin >> x;
    cout << "Masukkan angka kedua : ";
    cin >> y;
    // if (x > y)
    // {
    //     bilKecil = y;
    // }
    // else
    // {
    //     bilKecil = x;
    // }
    // for (int i = 1; i < bilKecil; i++)
    // {
    //     if (x % i == 0 && y % i == 0)
    //     {
    //         fpb = i;
    //     }
    // }
    for (int i = x; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            cout << "fpbnya adalah : " << i << endl;
            break;
        }
    }
    // cout << "fpbnya adalah : " << fpb << endl;

    return 0;
}