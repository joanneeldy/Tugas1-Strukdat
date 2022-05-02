#include <iostream>
using namespace std;

int main()
{
    int angka;

    cout << "Masukkan limit maksimum untuk deret angka: ";
    cin >> angka;

    cout << "\nDeret angka ganjil lebih kecil dari " << angka << " yaitu:\n";
    for(int j = 1; j < angka; j++)
    {
        if(j % 2 != 0)
        {
            cout << j << " ";
        }
    }

return 0;
}