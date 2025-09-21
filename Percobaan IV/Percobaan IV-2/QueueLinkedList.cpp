#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* frontPtr = nullptr;
Node* rearPtr = nullptr;

bool isEmpty() { return frontPtr == nullptr; }

void enqueue(int x) {
    Node* n = new Node{x, nullptr};
    if (isEmpty()) {
        frontPtr = rearPtr = n;
    } else {
        rearPtr->next = n;
        rearPtr = n;
    }
    cout << "Enqueue " << x << " berhasil\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong\n";
        return;
    }
    Node* temp = frontPtr;
    cout << "Dequeue " << temp->data << " berhasil\n";
    frontPtr = frontPtr->next;
    if (frontPtr == nullptr) rearPtr = nullptr;
    delete temp;
}

void peek() {
    if (isEmpty()) {
        cout << "Queue kosong\n";
        return;
    }
    cout << "Elemen depan: " << frontPtr->data << '\n';
}

void display() {
    if (isEmpty()) {
        cout << "Queue kosong\n";
        return;
    }
    cout << "Isi queue (depan ke belakang): ";
    for (Node* cur = frontPtr; cur != nullptr; cur = cur->next) {
        cout << cur->data << " ";
    }
    cout << '\n';
}

int main() {
    int pilih, val;
    do {
        cout << "\n=== QUEUE (Linked List) ===\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Tampilkan\n5. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        if (pilih == 1) { cout << "Nilai: "; cin >> val; enqueue(val); }
        else if (pilih == 2) dequeue();
        else if (pilih == 3) peek();
        else if (pilih == 4) display();
    } while (pilih != 5);

    while (!isEmpty()) dequeue();
    return 0;
}
