#include <iostream>
using namespace std;

int main()
{
    int baris;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;

    for(int a = baris; a >= 1; --a)
    {
        for(int b = 1; b <= a; ++b)
        {
            cout << b << " ";
        }
        cout << endl;
    }
    return 0;
}