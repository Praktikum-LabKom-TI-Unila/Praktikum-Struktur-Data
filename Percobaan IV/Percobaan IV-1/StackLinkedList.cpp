#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* topPtr = nullptr;

bool isEmpty();
void push (int x);
void pop();
void peek();
void display();

int main() {
    int pilih, val;
    do {
        cout << "\n=== STACK (Linked List) ===\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Tampilkan\n5. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        if (pilih == 1) { cout << "Nilai: "; cin >> val; push(val); }
        else if (pilih == 2) pop();
        else if (pilih == 3) peek();
        else if (pilih == 4) display();
    } while (pilih != 5);

    while (!isEmpty()) pop();
    return 0;
}

bool isEmpty() { return topPtr == nullptr; }

void push(int x) {
    Node* n = new Node{x, topPtr};
    topPtr = n;
    cout << "Push " << x << " berhasil\n";
}

void pop() {
    if (isEmpty()) { 
        cout << "Stack kosong\n"; 
        return; 
    }
    Node* temp = topPtr;
    cout << "Pop " << temp->data << " berhasil\n";
    topPtr = topPtr->next;
    delete temp;
}

void peek() {
    if (isEmpty()) { 
        cout << "Stack kosong\n"; 
        return; 
    }
    cout << "Elemen teratas: " << topPtr->data << '\n';
}

void display() {
    if (isEmpty()) { 
        cout << "Stack kosong\n"; 
        return; 
    }
    cout << "Isi stack (atas ke bawah): ";
    for (Node* cur = topPtr; cur != nullptr; cur = cur->next) cout << cur->data << " ";
    cout << '\n';
}