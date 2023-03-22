#include<iostream>

using namespace std;

int main()
{  
    // Array untuk menyimpan input
    int inputNumbers = {};

    cout << "Masukkan angka : " << endl;
    cin >> inputNumbers;

    if(inputNumbers + 1 < 0)
    {
        cout << " Nilai paling kecil adalah : " << inputNumbers << endl;
    }
    return 0;
}