#include <iostream>
using namespace std;

int main ()
{
    int arr[10], size, j, sum = 0;
    
    cout << "Masukkan ukuran array yang diinginkan: ";
    cin >> size;
    
    for (j = 0; j < size; j++){
        cout << "\nMasukkan nilai ke " << j + 1 << ": ";
        cin >> arr[j];
    }
    cout << endl;
    
    cout << "Array: \n\t";
    for (int j = 0; j < size; ++j) {
        cout << arr[j] << " ";
    }
    cout << endl;
    
    for (j = 0; j < size; j++)
    {
        sum += arr[j];
    }

    cout << "\nTotal nilai yang di-input: " << sum;
    return 0;
}