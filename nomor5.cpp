#include <iostream>
using namespace std;

int main()
{
    int array[4][3] = {
        {4, 7, 2},
        {5, 9, 1},
        {8, 3, 6},
        {3, 2, 5}
    };

    cout << "Array 2 dimensi: " << endl;
    for(int a = 0; a < 4; ++a){
        cout << endl;
        for(int b = 0; b < 3; ++b){
            cout << array[a][b] << " ";
        }
    }
    return 0;
}