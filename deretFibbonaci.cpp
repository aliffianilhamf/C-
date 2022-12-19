#include <iostream>
using namespace std;

int main()
{
    int x, angk1 = 0, angk2 = 1, angkSljt;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (i == 1)
        {
            cout << angk1 << " ";
            continue;
        }
        if (i == 2)
        {
            cout << angk2 << " ";
            continue;
        }
        angkSljt = angk1 + angk2;
        cout << angkSljt << " ";
        angk1 = angk2;
        angk2 = angkSljt;
    }

    return 0;
}