#include <iostream>
using namespace std;

const int SIZE = 10;

enum SlotState { EMPTY, OCCUPIED, DELETED };

struct Entry {
    int key;
    int value;
    SlotState state;
};

int hashFunction(int key) { return (key % SIZE + SIZE) % SIZE; }

void initTable(Entry table[]) {
    for (int i = 0; i < SIZE; ++i) {
        table[i].state = EMPTY;
    }
}

bool insert(Entry table[], int key, int value) {
    int idx = hashFunction(key);
    int firstDeleted = -1;

    for (int step = 0; step < SIZE; ++step) {
        int i = (idx + step) % SIZE;

        if (table[i].state == OCCUPIED) {
            if (table[i].key == key) {            // update jika key sama
                table[i].value = value;
                return true;
            }
        } else if (table[i].state == DELETED) {
            if (firstDeleted == -1) firstDeleted = i;
        } else { 
            if (firstDeleted != -1) i = firstDeleted; 
            table[i].key = key;
            table[i].value = value;
            table[i].state = OCCUPIED;
            return true;
        }
    }

    if (firstDeleted != -1) {
        table[firstDeleted].key = key;
        table[firstDeleted].value = value;
        table[firstDeleted].state = OCCUPIED;
        return true;
    }
    return false;
}

Entry* search(Entry table[], int key) {
    int idx = hashFunction(key);

    for (int step = 0; step < SIZE; ++step) {
        int i = (idx + step) % SIZE;

        if (table[i].state == EMPTY) {
            return nullptr;
        }
        if (table[i].state == OCCUPIED && table[i].key == key) {
            return &table[i];
        }
    }
    return nullptr;
}

bool removeKey(Entry table[], int key) {
    Entry* e = search(table, key);
    if (!e) return false;
    e->state = DELETED;
    return true;
}

void display(Entry table[]) {
    cout << "\nIsi Hash Table (Open Addressing, Linear Probing):\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << i << ": ";
        if (table[i].state == EMPTY) cout << "EMPTY\n";
        else if (table[i].state == DELETED) cout << "DELETED\n";
        else cout << "(" << table[i].key << "," << table[i].value << ")\n";
    }
}

int main() {
    Entry table[SIZE];
    initTable(table);

    insert(table, 1, 100);
    insert(table, 11, 200);
    insert(table, 21, 300);
    insert(table, 2, 400);

    display(table);

    Entry* hasil = search(table, 11);
    if (hasil) cout << "\nKey 11 ditemukan, value = " << hasil->value << "\n";
    else       cout << "\nKey 11 tidak ditemukan\n";

    removeKey(table, 11);
    cout << "\nSetelah menghapus key 11:\n";
    display(table);

    return 0;
}