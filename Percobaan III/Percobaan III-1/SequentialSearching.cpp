#include <iostream>
using namespace std;

int main() {
    const int x = 15;
    int data[x] = {3,8,1,9,0,6,7,5,2,2,1,6,2,5,12};
    int target;
    int i = 0;
    int counter = 0;

    cout << "Masukkan angka yang ingin dicari : ";
    cin >> target;

    while (i < x) {
        if (data[i] == target) {
            counter++;
        }
        i++;
    }

    if (counter > 0) {
        cout << "Angka " << target << " ditemukan sebanyak " << counter << " kali." << endl;
    }
    else {
        cout << "Angka " << target << " tidak ditemukan." << endl;
    }

    return 0;
}
