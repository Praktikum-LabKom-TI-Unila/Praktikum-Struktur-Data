#include <iostream>
using namespace std;

void tukar(int *x, int *y);

int main() {
    int n;
    int arr[1005];

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                tukar(&arr[i], &arr[j]);
            }
        }
    }

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void tukar(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}