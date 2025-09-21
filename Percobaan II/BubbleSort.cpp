#include <iostream>
using namespace std;

void tukar(int *x, int *y);

int main() {
    int n;
    int arr[1005];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tukar(&arr[j], &arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

void tukar(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}