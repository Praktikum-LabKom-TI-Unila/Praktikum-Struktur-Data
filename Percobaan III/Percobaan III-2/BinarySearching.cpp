#include <iostream>
using namespace std;

int main() {
    int n; 
    int target;
    int arr[1005];
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    cout << "Masukkan elemen (urut menaik): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> target;

    int l = 0, r = n - 1, pos = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        cout << "median :" << m << endl;
        if (arr[m] == target) { 
            pos = m; 
            break; 
        }
        else if (arr[m] < target) {
            cout << "Mencari di kiri" << endl;
            l = m + 1;
        }
        else {
            cout << "Mencari di kanan" << endl;
            r = m - 1;
        }
    }
    if (pos != -1) {
        cout << "Ditemukan pada pencarian ke-" << pos+1 << endl;
    }
    else {
        cout << "Tidak ditemukan" << endl;
    }
    return 0;
}

