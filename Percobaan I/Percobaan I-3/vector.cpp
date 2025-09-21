#include <iostream>
using namespace std;

struct Vector {
    int* data;
    int capacity;
    int length;
};

void init(Vector& v) {
    v.capacity = 2;
    v.length = 0;
    v.data = new int[v.capacity];
}

void resize(Vector& v, int newCap) {
    int* newData = new int[newCap];
    for (int i = 0; i < v.length; i++) {
        newData[i] = v.data[i];
    }
    delete[] v.data;
    v.data = newData;
    v.capacity = newCap;
}

void push_back(Vector& v, int value) {
    if (v.length == v.capacity) {
        resize(v, v.capacity * 2);
    }
    v.data[v.length] = value;
    v.length++;
}

void pop_back(Vector& v) {
    if (v.length > 0) {
        v.length--;
    }
}

int get(Vector& v, int index) {
    if (index >= 0 && index < v.length) {
        return v.data[index];
    }
    return -1;
}

void set(Vector& v, int index, int value) {
    if (index >= 0 && index < v.length) {
        v.data[index] = value;
    }
}

int size(Vector& v) {
    return v.length;
}

void display(Vector& v) {
    cout << "[";
    for (int i = 0; i < v.length; i++) {
        cout << v.data[i];
        if (i < v.length - 1) cout << ", ";
    }
    cout << "]\n";
}

void clear(Vector& v) {
    delete[] v.data;
    v.data = nullptr;
    v.capacity = 0;
    v.length = 0;
}

int main() {
    Vector v;
    init(v);

    push_back(v, 10);
    push_back(v, 20);
    push_back(v, 30);

    cout << "Isi vector: ";
    display(v);

    cout << "Elemen ke-1 = " << get(v, 1) << endl;

    set(v, 1, 99);
    cout << "Set elemen ke-1 jadi 99: ";
    display(v);

    pop_back(v);
    cout << "Setelah pop_back: ";
    display(v);

    cout << "Ukuran vector sekarang = " << size(v) << endl;

    clear(v);
    return 0;
}