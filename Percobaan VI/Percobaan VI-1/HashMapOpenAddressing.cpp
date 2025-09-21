#include <iostream>
using namespace std;

const int SIZE = 10;

struct Node {
    int key;
    int value;
    Node* next;
};

void initTable(Node* table[]) {
    for (int i = 0; i < SIZE; i++) {
        table[i] = nullptr;
    }
}

int hashFunction(int key) {
    return (key % SIZE + SIZE) % SIZE;
}

void insert(Node* table[], int key, int value) {
    int index = hashFunction(key);
    Node* cur = table[index];
    while (cur != nullptr) {
        if (cur->key == key) {
            cur->value = value;
            return;
        }
        cur = cur->next;
    }
    Node* baru = new Node;
    baru->key = key;
    baru->value = value;
    baru->next = table[index];
    table[index] = baru;
}

Node* search(Node* table[], int key) {
    int index = hashFunction(key);
    Node* cur = table[index];
    while (cur != nullptr) {
        if (cur->key == key) {
            return cur;
        }
        cur = cur->next;
    }
    return nullptr;
}

void removeKey(Node* table[], int key) {
    int index = hashFunction(key);
    Node* cur = table[index];
    Node* prev = nullptr;
    while (cur != nullptr) {
        if (cur->key == key) {
            if (prev == nullptr) {
                table[index] = cur->next;
            } else {
                prev->next = cur->next;
            }
            delete cur;
            return;
        }
        prev = cur;
        cur = cur->next;
    }
}

void display(Node* table[]) {
    cout << "\nIsi Hash Table:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i << ": ";
        Node* tmp = table[i];
        while (tmp != nullptr) {
            cout << "(" << tmp->key << "," << tmp->value << ") -> ";
            tmp = tmp->next;
        }
        cout << "NULL\n";
    }
}

int main() {
    Node* table[SIZE];
    initTable(table);

    insert(table, 1, 100);
    insert(table, 11, 200);
    insert(table, 21, 300);
    insert(table, 2, 400);

    display(table);

    Node* hasil = search(table, 11);
    if (hasil != nullptr) {
        cout << "\nKey 11 ditemukan dengan value = " << hasil->value << endl;
    } else {
        cout << "\nKey 11 tidak ditemukan\n";
    }

    removeKey(table, 11);
    cout << "\nSetelah menghapus key 11:\n";
    display(table);

    return 0;
}
