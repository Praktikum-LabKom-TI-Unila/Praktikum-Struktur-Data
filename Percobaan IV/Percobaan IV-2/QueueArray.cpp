#include <iostream>
using namespace std;

const int MAXN = 100;
int q[MAXN];
int frontIdx = -1, rearIdx = -1;

bool isEmpty() { return frontIdx == -1; }
bool isFull() { return (rearIdx + 1) % MAXN == frontIdx; }

void enqueue(int x) {
    if (isFull()) {
        cout << "Queue penuh\n";
        return;
    }
    if (isEmpty()) {
        frontIdx = rearIdx = 0;
    } else {
        rearIdx = (rearIdx + 1) % MAXN;
    }
    q[rearIdx] = x;
    cout << "Enqueue " << x << " berhasil\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong\n";
        return;
    }
    cout << "Dequeue " << q[frontIdx] << " berhasil\n";
    if (frontIdx == rearIdx) {
        frontIdx = rearIdx = -1;
    } else {
        frontIdx = (frontIdx + 1) % MAXN;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong\n";
        return;
    }
    cout << "Elemen depan: " << q[frontIdx] << '\n';
}

void display() {
    if (isEmpty()) {
        cout << "Queue kosong\n";
        return;
    }
    cout << "Isi queue (depan ke belakang): ";
    int i = frontIdx;
    while (true) {
        cout << q[i] << " ";
        if (i == rearIdx) break;
        i = (i + 1) % MAXN;
    }
    cout << '\n';
}

int main() {
    int pilih, val;
    do {
        cout << "\n=== QUEUE (Array) ===\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Tampilkan\n5. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        if (pilih == 1) { cout << "Nilai: "; cin >> val; enqueue(val); }
        else if (pilih == 2) dequeue();
        else if (pilih == 3) peek();
        else if (pilih == 4) display();
    } while (pilih != 5);
    return 0;
}
