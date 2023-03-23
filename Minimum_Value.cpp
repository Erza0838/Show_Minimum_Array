#include<iostream>

using namespace std;

// Function untuk memasukkan input
void Input()
{   
    // Array untuk menyimpan input
    int inputNumbers[5] = {};

    if(inputNumbers[0] < 1 || inputNumbers[0] == 0)
    {
        cout << "Masukkan angka ke 0 : " << endl;
        cin >> inputNumbers[0];
        cout << "Angka ke 0 : " <<  inputNumbers[0] << endl;
    }

    if(inputNumbers[1] < 1 || inputNumbers[1] == 0)
    {
        cout << "Masukkan angka ke 1 : " << endl;
        cin >> inputNumbers[1];
        cout << "Angka ke 1 : " << inputNumbers[1] << endl;
    }

    if(inputNumbers[2] < 1 || inputNumbers[2] == 0)
    {
        cout << "Masukkan angka ke 2 : " << endl;
        cin >> inputNumbers[2];
        cout << "Angka ke 2 : " << inputNumbers[2] << endl;
    }

    if(inputNumbers[3] < 1 || inputNumbers[3] == 0)
    {
        cout << "Masukkan angka ke 3 : " << endl;
        cin >> inputNumbers[3];
        cout << "Angka ke 3 : " << inputNumbers[3] << endl;
    }

    if(inputNumbers[4] < 1 || inputNumbers[4] == 0)
    {
        cout << "Masukkan angka ke 4 : " << endl;
        cin >> inputNumbers[4];
        cout << "Angka ke 4 : " << inputNumbers[4] << endl;
    }

    if(size_t(inputNumbers) > 0)
    {
        for(int compareValue = 0; compareValue < size_t(inputNumbers); compareValue++)
        {   
            if(inputNumbers[compareValue] + 1 < inputNumbers[0] || inputNumbers[compareValue] * 1 < inputNumbers[0])
            {   
                cout << "Nilai minimumnya adalah : " << inputNumbers[compareValue] << endl;
                break;
            }
        }
    }
}
// Baris akhir function 

int main()
{   
    // Function untuk memasukkan input
    Input();
    // Baris akhir function 

    return 0;
}
