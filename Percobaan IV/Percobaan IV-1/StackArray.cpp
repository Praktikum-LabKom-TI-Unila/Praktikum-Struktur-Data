#include <iostream>
using namespace std;

const int MAX = 100;
int st[MAX];
int topIdx = -1;
bool isEmpty();
bool isFull();
void push(int x);
void pop();
void display();
void peek();

int main() {
    int pilih, val;
    do {
        cout << "\n=== STACK (Array) ===\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Tampilkan\n5. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        if (pilih == 1) { cout << "Nilai: "; cin >> val; push(val); }
        else if (pilih == 2) pop();
        else if (pilih == 3) peek();
        else if (pilih == 4) display();
    } while (pilih != 5);
    return 0;
}

bool isEmpty() { 
    return topIdx == -1; 
}
bool isFull()  { 
    return topIdx == MAX - 1; 
}

void push(int x) {
    if (isFull()) { 
        cout << "Stack penuh\n"; 
        return; 
    }
    st[++topIdx] = x;
    cout << "Push " << x << " berhasil\n";
}

void pop() {
    if (isEmpty()) { 
        cout << "Stack kosong\n"; 
        return; 
    }
    cout << "Pop " << st[topIdx--] << " berhasil\n";
}

void peek() {
    if (isEmpty()) { 
        cout << "Stack kosong\n"; 
        return; 
    }
    cout << "Elemen teratas: " << st[topIdx] << '\n';
}

void display() {
    if (isEmpty()) { 
        cout << "Stack kosong\n"; 
        return; 
    }
    cout << "Isi stack (atas ke bawah): ";
    for (int i = topIdx; i >= 0; --i) {
        cout << st[i] << " ";
    }
    cout << '\n';
}
