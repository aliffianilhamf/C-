#include <iostream>
using namespace std;
int main()
{
    // matriks 2x2
    //  int matriksA[2][2] = {{2, 8}, {1, 5}}, matriksB[2][2] = {{-4, -2}, {-3, -1}}, matriksC[2][2], temp = 0;
    //  for (int i = 0; i < 2; i++)
    //  {
    //      for (int j = 0; j < 2; j++)
    //      {
    //          for (int k = 0; k < 2; k++)
    //          {
    //              temp += matriksA[i][k] * matriksB[k][j];
    //          }
    //          matriksC[i][j] = temp;
    //          temp = 0;
    //      }
    //  }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << matriksC[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    // matriks lain
    // int matriksA[2][3] = {{4, 6, 2}, {3, 1, 5}}, matriksB[3][2] = {{1, 4}, {2, 5}, {3, 6}}, matriksC[2][2], temp = 0;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         for (int k = 0; k < 3; k++)
    //         {
    //             temp += matriksA[i][k] * matriksB[k][j];
    //         }
    //         matriksC[i][j] = temp;
    //         temp = 0;
    //     }
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << matriksC[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    //
    int matriksA[3][3], matriksB[3][3], matriksC[3][3], barisA, kolomA, barisB, kolomB, temp;

    cout << "Masukkan jumlah baris matriks A : ";
    cin >> barisA;
    cout << "masukkan jumlah kolom matriks A : ";
    cin >> kolomA;

    cout << "Masukkan jumlah baris matriks B : ";
    cin >> barisB;
    cout << "masukkan jumlah kolom matriks B : ";
    cin >> kolomB;

    if (kolomA != barisB)
    {
        cout << "matriks tidak dapat dikalikan" << endl;
    }
    matriksA[3][3] = matriksA[barisA][kolomA];
    matriksB[3][3] = matriksB[barisB][kolomB];
    matriksC[3][3] = matriksC[barisA][kolomB];
    // inputan matriks a
    cout << "===== Matriks A ===== " << endl;
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            cout << "masukkan elemen dalam baris " << i + 1 << " dan kolom " << j + 1 << " : ";
            cin >> matriksA[i][j];
        }
    }
    // menampilkan matriks a
    cout << "===== Matriks A ===== " << endl;
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            cout << matriksA[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "===== Matriks B ===== " << endl;
    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << "Masukkan elemen pada baris " << i + 1 << " dan kolom " << j + 1 << " : ";
            cin >> matriksB[i][j];
        }
    }
    cout << "===== Matriks B ===== " << endl;
    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << matriksB[i][j] << "\t";
        }
        cout << endl;
    }
    // perkalian
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            for (int k = 0; k < barisB; k++)
            {
                temp += matriksA[i][k] * matriksB[k][j];
            }
            matriksC[i][j] = temp;
            temp = 0;
        }
    }

    cout << "===== HASIL PERKALIAN DUA MATRIK DIATAS ADALAH ===== " << endl;
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << matriksC[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}