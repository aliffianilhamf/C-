#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Masukkan angka: ";
    cin >> x;
    cout << x << " -> ";
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cout << i;
            if (i < x)
            {
                cout << ",";
            }
        }
    }

    return 0;
}